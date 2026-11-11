// Abstract Syntax Tree lab — complete lisp runtime (mandatory + non-mandatory parts)
// Build: g++ -std=c++17 -Wall -o ast ast.cpp -ldl
// Run:   ./ast --tests    (runs the test snippets of the mandatory part)
//        ./ast            (interactive interpreter, Ctrl+C or Ctrl+D to quit)
//        ./ast < prog.lisp
#include <iostream>
#include <string>
#include <cstdint>
#include <cstdlib>
#include <cstdio>
#include <cctype>
#include <dlfcn.h>

// Errors are now exceptions, caught by the main loop.
void error(std::string str) __attribute__((noreturn));

void error(std::string str) {
  throw str;
}

struct list_t;
struct frame_t;

/* ---------- node_t ---------- */
struct node_t {
  virtual node_t* eval(frame_t* frame) { return this; }
  virtual node_t* apply(frame_t* frame, list_t* list) { error(to_string() + " is not an operation"); }
  virtual std::string to_string() { return "???"; }
  virtual list_t* as_list() { error(to_string() + " is not a list"); }
  virtual uintptr_t int_value() { error(to_string() + " is not an integer"); }
  virtual bool is_integer() { return false; }
  virtual bool is(std::string id) { return false; }
};

/* ---------- integer_t (also the foreign function interface) ---------- */
struct integer_t : node_t {
  uintptr_t value;

  integer_t(uintptr_t value) : value(value) {}

  std::string to_string() override { return std::to_string((intptr_t)value); }
  uintptr_t int_value() override { return value; }
  bool is_integer() override { return true; }
  node_t* apply(frame_t* frame, list_t* list) override;   // FFI, defined below
};

/* ---------- string_t ---------- */
struct string_t : node_t {
  std::string value;

  string_t(std::string value) : value(value) {}

  std::string to_string() override { return value; }
};

/* ---------- list_t ---------- */
struct list_t : node_t {
  node_t** elements;
  size_t   nb_elements;
  size_t   capacity;

  list_t() : elements(nullptr), nb_elements(0), capacity(0) {}

  list_t* as_list() override { return this; }
  size_t size() { return nb_elements; }

  node_t* at(size_t i) {
    if(i >= nb_elements)
      error("index " + std::to_string(i) + " out of bounds in " + to_string());
    return elements[i];
  }

  void set_at(size_t i, node_t* value) {
    if(i >= nb_elements)
      error("index " + std::to_string(i) + " out of bounds in " + to_string());
    elements[i] = value;
  }

  void append(node_t* value) {
    if(nb_elements == capacity) {
      size_t new_capacity = capacity ? capacity * 2 : 4;
      node_t** new_elements = new node_t*[new_capacity];
      for(size_t i=0; i<nb_elements; i++)
        new_elements[i] = elements[i];
      elements = new_elements;
      capacity = new_capacity;
    }
    elements[nb_elements++] = value;
  }

  std::string to_string() override {
    std::string res = "(";
    for(size_t i=0; i<nb_elements; i++)
      res += (i ? " " : "") + elements[i]->to_string();
    return res + ")";
  }

  node_t* eval(frame_t* frame) override {
    return at(0)->eval(frame)->apply(frame, this);
  }

  // A list used as an operation is a lambda expression: call it.
  node_t* apply(frame_t* frame, list_t* list) override;   // defined after frame_t
};

/* ---------- frame_t ---------- */
struct frame_t : list_t {
  frame_t* parent;

  frame_t(frame_t* parent = nullptr) : parent(parent) {}

  void set(node_t* sym, node_t* value) {
    for(size_t i=0; i<size(); i++) {
      list_t* entry = at(i)->as_list();
      if(sym->is(entry->at(0)->to_string())) {
        entry->set_at(1, value);
        return;
      }
    }
    list_t* entry = new list_t;
    entry->append(sym);
    entry->append(value);
    append(entry);
  }

  node_t* get(node_t* sym) {
    for(size_t i=0; i<size(); i++) {
      list_t* entry = at(i)->as_list();
      if(sym->is(entry->at(0)->to_string()))
        return entry->at(1);
    }
    if(parent)
      return parent->get(sym);
    error("unbound variable " + sym->to_string());
  }
};

node_t* list_t::apply(frame_t* frame, list_t* list) {
  if(size() < 3 || !at(0)->is("lambda"))
    error(to_string() + " is not a function");

  list_t*  params    = at(1)->as_list();
  frame_t* new_frame = new frame_t(frame);

  if(list->size() - 1 != params->size())
    error("wrong number of arguments in " + list->to_string() + " for " + to_string());

  for(size_t i=0; i<params->size(); i++)
    new_frame->set(params->at(i), list->at(i+1)->eval(frame));

  node_t* res = nullptr;
  for(size_t i=2; i<size(); i++)          // body (one or more expressions)
    res = at(i)->eval(new_frame);
  return res;
}

/* ---------- symbol_t ---------- */
struct symbol_t : node_t {
  std::string id;

  symbol_t(std::string id) : id(id) {}

  bool is(std::string id) override { return this->id == id; }
  std::string to_string() override { return id; }
  node_t* eval(frame_t* frame) override { return frame->get(this); }
};

/* ---------- keywords ---------- */
struct keyword_t : node_t {
  std::string id;

  keyword_t(std::string id) : id(id) {}

  std::string to_string() override { return "<" + id + ">"; }

  void check_args(list_t* list, size_t min, size_t max) {
    size_t n = list->size() - 1;
    if(n < min || n > max)
      error("wrong number of arguments in " + list->to_string());
  }
};

struct add_t : keyword_t {
  add_t() : keyword_t("+") {}
  node_t* apply(frame_t* frame, list_t* list) override {
    uintptr_t res = 0;
    for(size_t i=1; i<list->size(); i++)
      res += list->at(i)->eval(frame)->int_value();
    return new integer_t { res };
  }
};

struct sub_t : keyword_t {
  sub_t() : keyword_t("-") {}
  node_t* apply(frame_t* frame, list_t* list) override {
    check_args(list, 1, SIZE_MAX);
    uintptr_t res = list->at(1)->eval(frame)->int_value();
    if(list->size() == 2)
      return new integer_t { -res };
    for(size_t i=2; i<list->size(); i++)
      res -= list->at(i)->eval(frame)->int_value();
    return new integer_t { res };
  }
};

struct mul_t : keyword_t {
  mul_t() : keyword_t("*") {}
  node_t* apply(frame_t* frame, list_t* list) override {
    uintptr_t res = 1;
    for(size_t i=1; i<list->size(); i++)
      res *= list->at(i)->eval(frame)->int_value();
    return new integer_t { res };
  }
};

// =, <, <=, >, >=, != : signed comparison of two integers, returns 1 or 0
struct cmp_t : keyword_t {
  bool (*op)(intptr_t, intptr_t);
  cmp_t(std::string id, bool (*op)(intptr_t, intptr_t)) : keyword_t(id), op(op) {}
  node_t* apply(frame_t* frame, list_t* list) override {
    check_args(list, 2, 2);
    intptr_t a = list->at(1)->eval(frame)->int_value();
    intptr_t b = list->at(2)->eval(frame)->int_value();
    return new integer_t { op(a, b) ? 1u : 0u };
  }
};

struct set_t : keyword_t {
  set_t() : keyword_t("set!") {}
  node_t* apply(frame_t* frame, list_t* list) override {
    check_args(list, 2, 2);
    node_t* value = list->at(2)->eval(frame);
    frame->set(list->at(1), value);
    return value;
  }
};

struct if_t : keyword_t {
  if_t() : keyword_t("if") {}
  node_t* apply(frame_t* frame, list_t* list) override {
    check_args(list, 2, 3);
    if(list->at(1)->eval(frame)->int_value() != 0)
      return list->at(2)->eval(frame);
    if(list->size() == 4)
      return list->at(3)->eval(frame);
    return new integer_t { 0 };
  }
};

struct begin_t : keyword_t {
  begin_t() : keyword_t("begin") {}
  node_t* apply(frame_t* frame, list_t* list) override {
    node_t* res = new integer_t { 0 };
    for(size_t i=1; i<list->size(); i++)
      res = list->at(i)->eval(frame);
    return res;
  }
};

struct while_t : keyword_t {
  while_t() : keyword_t("while") {}
  node_t* apply(frame_t* frame, list_t* list) override {
    check_args(list, 1, SIZE_MAX);
    node_t* res = new integer_t { 0 };
    while(list->at(1)->eval(frame)->int_value() != 0)
      for(size_t i=2; i<list->size(); i++)
        res = list->at(i)->eval(frame);
    return res;
  }
};

// (lambda (params...) body): evaluating it returns the expression itself
struct lambda_t : keyword_t {
  lambda_t() : keyword_t("lambda") {}
  node_t* apply(frame_t* frame, list_t* list) override {
    check_args(list, 2, SIZE_MAX);
    list->at(1)->as_list();     // checks that the parameters form a list
    return list;
  }
};

/* ---------- foreign function interface (code provided by the lab) ---------- */
node_t* integer_t::apply(frame_t* frame, list_t* list) {
  // Guard (not in the lab): small integers can't be function addresses, so (1 2) is an error, not a crash.
  if(int_value() < 0x10000)
    error(to_string() + " is not a function address");

  uintptr_t (*f)(uintptr_t, uintptr_t, uintptr_t, uintptr_t) = (uintptr_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t))int_value();
  uintptr_t (*g)(uintptr_t, ...) = (uintptr_t (*)(uintptr_t, ...))int_value();
  std::string strs[4];
  uintptr_t args[] = { 0, 0, 0, 0 };
  size_t n = list->size() < 5 ? list->size() : 5;

  for(size_t i=1; i<n; i++) {
    node_t* arg = list->at(i)->eval(frame);
    // std::cout << "str: '" << arg->to_string() << "'" << std::endl;   // debug trace from the lab
    args[i-1] = arg->is_integer() ? arg->int_value() : (uintptr_t)(strs[i-1] = arg->to_string()).c_str();
  }

  if((uintptr_t)f == (uintptr_t)printf || (uintptr_t)f == (uintptr_t)vprintf || (uintptr_t)f == (uintptr_t)snprintf)
    return new integer_t { g(args[0], args[1], args[2], args[3]) };
  else
    return new integer_t { f(args[0], args[1], args[2], args[3]) };
}

/* ---------- lexer ---------- */
struct lexer_t {
  std::istream* is;
  int next;

  lexer_t(std::istream* is) : is(is), next(' ') {}

  void skip_spaces() {
    while(std::isspace(next))
      next = is->get();
  }

  bool at_eof() {
    skip_spaces();
    return next == EOF;
  }

  static bool is_delimiter(int c) {
    return c == EOF || std::isspace(c) || c == '(' || c == ')' || c == '"';
  }

  node_t* next_token() {
    skip_spaces();

    if(next == EOF)
      error("unexpected end of file");

    if(next == '(' || next == ')') {
      node_t* res = new symbol_t { std::string(1, (char)next) };
      next = is->get();
      return res;
    }

    if(next == '"') {
      std::string str = "";
      next = is->get();
      while(next != '"') {
        if(next == EOF)
          error("unterminated string");
        if(next == '\\') {                       // escape sequences: \n \t \" \\ ...
          next = is->get();
          switch(next) {
            case 'n': str += '\n'; break;
            case 't': str += '\t'; break;
            case EOF: error("unterminated string");
            default:  str += (char)next;
          }
        } else
          str += (char)next;
        next = is->get();
      }
      next = is->get();                          // consume the closing "
      return new string_t { str };
    }

    uintptr_t   number    = 0;
    std::string str       = "";
    bool        is_number = true;

    while(true) {
      if(next < '0' || next > '9')
        is_number = false;
      number = number * 10 + (next - '0');
      str += (char)next;
      next = is->get();
      if(is_delimiter(next)) {
        if(is_number)
          return new integer_t { number };
        return new symbol_t { str };
      }
    }
  }
};

/* ---------- parser ---------- */
node_t* parser(lexer_t* lexer) {
  node_t* token = lexer->next_token();

  if(!token->is("("))
    return token;

  list_t* list = new list_t;
  for(node_t* node = parser(lexer); !node->is(")"); node = parser(lexer))
    list->append(node);
  return list;
}

/* ---------- test snippets of the mandatory part ---------- */
void run_lab_tests() {
  frame_t* frame = new frame_t(nullptr);

  // Nodes and integers: 3 => 3
  {
    node_t* ast = new integer_t { 3 };
    std::cout << ast->to_string() << " => " << ast->eval(frame)->to_string() << std::endl;
  }

  // List: (1 2 3)
  {
    list_t* ast = new list_t;
    ast->append(new integer_t { 1 });
    ast->append(new integer_t { 2 });
    ast->append(new integer_t { 3 });
    std::cout << ast->to_string() << std::endl;
  }

  // Interpreter: (<+> (<+> 1 2) 3) => 6
  {
    node_t* add = new add_t;
    list_t* ast = new list_t;
    ast->append(add);
    ast->append(new list_t);
    ast->at(1)->as_list()->append(add);
    ast->at(1)->as_list()->append(new integer_t { 1 });
    ast->at(1)->as_list()->append(new integer_t { 2 });
    ast->append(new integer_t { 3 });
    std::cout << ast->to_string() << " => " << ast->eval(frame)->to_string() << std::endl;
  }

  // Frames: ((a 42) (b 21)): a=42
  {
    frame_t* f = new frame_t;
    f->set(new symbol_t { "a" }, new integer_t { 666 });
    f->set(new symbol_t { "b" }, new integer_t { 21 });
    f->set(new symbol_t { "a" }, new integer_t { 42 });
    std::cout << f->to_string() << ": a=" << f->get(new symbol_t { "a" })->to_string() << std::endl;
  }

  // Symbols: (<+> (<+> a 2) 3) => 42
  {
    node_t* add = new add_t;
    symbol_t* a = new symbol_t { "a" };
    frame_t* f = new frame_t;
    f->set(a, new integer_t { 37 });

    list_t* ast = new list_t;
    ast->append(add);
    ast->append(new list_t);
    ast->at(1)->as_list()->append(add);
    ast->at(1)->as_list()->append(a);
    ast->at(1)->as_list()->append(new integer_t { 2 });
    ast->append(new integer_t { 3 });
    std::cout << ast->to_string() << " => " << ast->eval(f)->to_string() << std::endl;
  }

  // set!: (<set!> a (<+> 1 2)) => 3, then (<+> a 10) => 13
  {
    node_t* add = new add_t;
    node_t* set = new set_t;
    symbol_t* a = new symbol_t { "a" };
    frame_t* f = new frame_t;

    list_t* sum = new list_t;
    sum->append(add);
    sum->append(new integer_t { 1 });
    sum->append(new integer_t { 2 });

    list_t* ast = new list_t;
    ast->append(set);
    ast->append(a);
    ast->append(sum);
    std::cout << ast->to_string() << " => " << ast->eval(f)->to_string() << std::endl;

    list_t* use = new list_t;
    use->append(add);
    use->append(a);
    use->append(new integer_t { 10 });
    std::cout << use->to_string() << " => " << use->eval(f)->to_string()
              << "   frame: " << f->to_string() << std::endl;
  }
}

/* ---------- main ---------- */
int main(int argc, char** argv) {
  if(argc > 1 && std::string(argv[1]) == "--tests") {
    try {
      run_lab_tests();
    } catch(std::string str) {
      std::cout << "Error: " << str << std::endl;
      return 1;
    }
    return 0;
  }

  frame_t* frame = new frame_t(nullptr);

  frame->set(new symbol_t { "+" },      new add_t);
  frame->set(new symbol_t { "-" },      new sub_t);
  frame->set(new symbol_t { "*" },      new mul_t);
  frame->set(new symbol_t { "=" },      new cmp_t("=",  [](intptr_t a, intptr_t b) { return a == b; }));
  frame->set(new symbol_t { "!=" },     new cmp_t("!=", [](intptr_t a, intptr_t b) { return a != b; }));
  frame->set(new symbol_t { "<" },      new cmp_t("<",  [](intptr_t a, intptr_t b) { return a <  b; }));
  frame->set(new symbol_t { "<=" },     new cmp_t("<=", [](intptr_t a, intptr_t b) { return a <= b; }));
  frame->set(new symbol_t { ">" },      new cmp_t(">",  [](intptr_t a, intptr_t b) { return a >  b; }));
  frame->set(new symbol_t { ">=" },     new cmp_t(">=", [](intptr_t a, intptr_t b) { return a >= b; }));
  frame->set(new symbol_t { "set!" },   new set_t);
  frame->set(new symbol_t { "if" },     new if_t);
  frame->set(new symbol_t { "begin" },  new begin_t);
  frame->set(new symbol_t { "while" },  new while_t);
  frame->set(new symbol_t { "lambda" }, new lambda_t);
  frame->set(new symbol_t { "dlsym" },  new integer_t { (uintptr_t)dlsym });
  frame->set(new symbol_t { "dlself" }, new integer_t { (uintptr_t)RTLD_DEFAULT });

  lexer_t lexer(&std::cin);

  while(!lexer.at_eof()) {
    try {
      node_t* ast = parser(&lexer);
      std::cout << ast->eval(frame)->to_string() << std::endl;
    } catch(std::string str) {
      std::cout << "Error: " << str << std::endl;
    }
  }

  return 0;
}

#include "shortest_path.h"

#include <iostream>
#include <vector>

node_t::node_t(location_t* location, node_t* from, double from_origin,
               double total, node_t* next)
    : next(next), location(location), from(from), from_origin(from_origin),
      total(total), visited(false) {}

shortest_path_t::shortest_path_t(location_t* from, location_t* to)
    : head(nullptr), base(nullptr), from(from), to(to) {}

shortest_path_t::~shortest_path_t() {
    while (head != nullptr) {
        node_t* next = head->next;
        delete head;
        head = next;
    }
}

void shortest_path_t::compute() {
    while (head != nullptr) {
        node_t* next = head->next;
        delete head;
        head = next;
    }
    base = nullptr;

    head = new node_t(from, nullptr, 0.0, from->distance_to(to), nullptr);

    while (true) {
        base = nullptr;
        for (node_t* n = head; n != nullptr; n = n->next) {
            if (!n->visited && (base == nullptr || n->total < base->total)) {
                base = n;
            }
        }

        if (base == nullptr || base->location == to) {
            return;
        }

        base->visited = true;

        for (std::size_t i = 0; i < base->location->nb_neighbors; ++i) {
            location_t* cur = base->location->neighbors[i];
            double from_origin = base->from_origin + base->location->distance_to(cur);
            double total = from_origin + cur->distance_to(to);

            node_t* n = head;
            while (n != nullptr && n->location != cur) {
                n = n->next;
            }

            if (n == nullptr) {
                head = new node_t(cur, base, from_origin, total, head);
            } else if (from_origin < n->from_origin) {
                n->from = base;
                n->from_origin = from_origin;
                n->total = total;
                n->visited = false;
            }
        }
    }
}

void shortest_path_t::display() {
    if (base == nullptr || base->location != to) {
        std::cout << "unable to find a path from " << from->name
                  << " to " << to->name << '\n';
        return;
    }

    std::vector<node_t*> path;
    for (node_t* n = base; n != nullptr; n = n->from) {
        path.push_back(n);
    }

    std::cout << "path from " << from->name << " to " << to->name << '\n';
    for (auto it = path.rbegin(); it != path.rend(); ++it) {
        std::cout << "  * " << (*it)->location->name << " at "
                  << (*it)->from_origin << " km from " << from->name << '\n';
    }
}

.SUFFIXES:         # remove all the implicit rules (avoid conflicts with our own rules)
.SECONDARY:        # all files are intermediate (keep them, otherwise they are removed)
.PHONY: all clean  # these targets are not files (even if a file named "all" or "clean" exists, the rule is applied)

# for the .PHONY rule above, see the comment at the end of the file

# here we define the variable CFLAGS
# CFLAGS is the flag that we use kwhen we compile a file with gcc
#
# -Wall: reports all the possible warning
# -Werror: considers any warning as an error
# -g: generate debug information (will become useful in the following labs)
CFLAGS=-Wall -Werror -g

# in a makefile, you find rules in the form:
#
# target: prerequist1 prerequist2
#
# a rule indicates that, to generate the file "target", we need the files "prerequist1" and "prerequist2"

# after a rule, you can have a recipe (a list of commands)
# target: prerequist1 prerequest2
#   command1
#   command2
#   ...
#
# the recipe is executed by make when it has to generate "target"
# make applies a rule (i.e., executes its recipe) if
#  * the file "target" does not exist
#  * or the files "prerequist1" and "prerequist2" are modified more recently than "target"
#    (in other words, the recipe is applied if "target" is outdated because "prerequist1" or "prerequist2" were modified
#    more recently than the last execution of make)
#  * "target" belongs to the PHONY rule (see comment at the end)

# when we invoke "make", it receives as argument a root target
# with this Makefile and the three rules defined below, we can invoke
#   make all
#   make sierpinski
#   make clean
#
# we say that the argument given to make is the root target
#
# starting from the root target given as argument, make build a tree of dependencies by using the rules
# for example all: sierpinski: sierpinski.c
#
# if we omit the root target, make use the target of the rule as the root target
# in this makefile, the first target of the first rule is "all", so invoking "make" is equivalent to invoking "make all"

# To generate the target "all", make needs the prequist "sierpinski"
# for that, make uses the next rule
all: sierpinski

# the rule below says that to generate sierpinski, we need sierpinski.c
# if sierpinski.c does not exist, since we don't have a rule to generate it, make ends with an error
# if sierpinski.c exists, make only executes the rule if sierpinski.c was modified more recently than sierpinski or if sierpinski does not yet exist
#
# when make applies the rule, it replaces $@ by the target and $^ by the prerequists in the recipe
# it also replaces CFLAGS by its value
# in other words, the recipe is "gcc -Wall -Werror -g -o sierpinski sierpinski.c"
sierpinski: sierpinski.c
	gcc $(CFLAGS) -o $@ $^

# clean is a rule that does not have any dependencies
# it cleanups the files generated during compilation, i.e., only the executable sierpinski in our case
clean:
	rm -f sierpinski

# at the beginning of the file, you have a .PHONY rule
# this rule is not really a rule
# it says that "all" and "clean" are not files
# this means that if a file "all" or "clean" exists in the current directory, make ignores it
# for this reason, make always executes the recipes of the rules "all" and "clean"
# note that because the recipe of the rule "all: sierpinski" is empty, the target "all" simply behaves like an alias for the rule "sierpinski: sierpinski.c"

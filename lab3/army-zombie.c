
#include "army.h"

#include <stdio.h>
#include <stdlib.h>

struct node {
    struct monster *monster;
    struct node *next;
};

struct army {
    struct node *first;
    struct node *last;
    int stars;
};

struct army *create_army(void) {
    struct army *army = malloc(sizeof *army);

    if (army == NULL) {
        return NULL;
    }

    army->first = NULL;
    army->last = NULL;
    army->stars = 0;

    return army;
}

int add_monster_to_army(struct army *army, struct monster *monster) {
    struct node *new_node = malloc(sizeof *new_node);

    if (new_node == NULL) {
        return 0;
    }

    new_node->monster = monster;
    new_node->next = NULL;

    if (army->first == NULL) {
        army->first = new_node;
    } else {
        army->last->next = new_node;
    }

    army->last = new_node;

    return 1;
}

void display_army(const struct army *army) {
    printf("This is a %d stars army\n", army->stars);

    const struct node *current = army->first;

    while (current != NULL) {
        display_monster(current->monster);
        current = current->next;
    }
}

void delete_army(struct army *army) {
    if (army == NULL) {
        return;
    }

    struct node *current = army->first;

    while (current != NULL) {
        struct node *next = current->next;
        free(current);
        current = next;
    }

    free(army);
}

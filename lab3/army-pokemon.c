
#include "army.h"
#include <stdlib.h>

struct army {
    struct monster **monsters;
    int top;
    int capacity;
};

struct army *create_army(void) {
    struct army *army = malloc(sizeof *army);
    if (army == NULL) {
        return NULL;
    }
    army->monsters = NULL;
    army->top = -1;
    army->capacity = 0;
    return army;
}

int add_monster_to_army(struct army *army, struct monster *monster) {
    if (army->top + 1 == army->capacity) {
        int new_capacity = (army->capacity == 0)
                         ? 1 : 2 * army->capacity;
        struct monster **new_monsters = realloc(
            army->monsters,
            (size_t)new_capacity * sizeof *new_monsters
        );
        if (new_monsters == NULL) {
            return 0;
        }
        army->monsters = new_monsters;
        army->capacity = new_capacity;
    }

    army->top++;
    army->monsters[army->top] = monster;
    return 1;
}

void display_army(const struct army *army) {
    for (int i = 0; i <= army->top; i++) {
        display_monster(army->monsters[i]);
    }
}

void delete_army(struct army *army) {
    if (army == NULL) {
        return;
    }
    free(army->monsters);
    free(army);
}

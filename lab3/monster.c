
#include "monster.h"

#include <stdio.h>
#include <stdlib.h>

struct monster *create_monster(const char *name, int health) {
    struct monster *monster = malloc(sizeof *monster);

    if (monster == NULL) {
        return NULL;
    }

    snprintf(monster->name, NAME_SIZE, "%s", name);
    monster->health = health;

    return monster;
}

void display_monster(const struct monster *monster) {
    printf("Name: %s, health: %d\n",
           monster->name, monster->health);
}

void delete_monster(struct monster *monster) {
    free(monster);
}

#ifndef MONSTER_H
#define MONSTER_H
#include "macro.h"
struct monster {
    char name[NAME_SIZE];
    int health;
};

struct monster *create_monster(const char *name, int health);
void display_monster(const struct monster *monster);
void delete_monster(struct monster *monster);

#endif

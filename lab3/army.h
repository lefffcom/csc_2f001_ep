#ifndef ARMY_H
#define ARMY_H
#include "monster.h"

struct army;
struct army *create_army(void);
int add_monster_to_army(struct army *army, struct monster *monster);
void display_army(const struct army *army);
void delete_army(struct army *army);

#endif

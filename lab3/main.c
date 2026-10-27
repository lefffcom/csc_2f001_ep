
#include <stdio.h>
#include "monster.h"
#include "army.h"
#include "macro.h"

int main(void) {
    struct monster *monsters[10];
    struct army *army = create_army();

    if (army == NULL) {
        return 1;
    }

    for (int i = 0; i < 10; i++) {
        char name[NAME_SIZE];
        snprintf(name, NAME_SIZE, "Pikachu-%d", i);

        monsters[i] = create_monster(name, 100);

        if (monsters[i] == NULL) {
            for (int j = 0; j < i; j++) {
                delete_monster(monsters[j]);
            }
            delete_army(army);
            return 1;
        }

        if (!add_monster_to_army(army, monsters[i])) {
            for (int j = 0; j <= i; j++) {
                delete_monster(monsters[j]);
            }
            delete_army(army);
            return 1;
        }
    }

    display_army(army);

    delete_army(army);

    for (int i = 0; i < 10; i++) {
        delete_monster(monsters[i]);
    }

    return 0;
}

//
// Created by ray on 9/21/23.
//

#ifndef EXAMPLE_SPELLBOOK_H
#define EXAMPLE_SPELLBOOK_H

#include "Potion.h"
#include <vector>

class Spellbook {
private:
    std::vector<Potion> potions;

public:
    void addPotion(const Potion &p) {
        potions.push_back(p);
    }

    Potion getPotion(int index) {
        return potions[index];
    }
};


#endif //EXAMPLE_SPELLBOOK_H

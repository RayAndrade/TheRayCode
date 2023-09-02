//
// Created by ray on 9/1/23.
//

#ifndef EXAMPLE2_MONSTER_H
#define EXAMPLE2_MONSTER_H

#include "Creature.h"

// A leaf in the composite pattern. Represents individual monsters
class Zombie : public Creature {
public:
    void scare() const override {
        std::cout << "Zombie moans and reaches out for brains!" << std::endl;
    }
};

class Ghost : public Creature {
public:
    void scare() const override {
        std::cout << "Ghost goes 'Boo!'" << std::endl;
    }
};

#endif //EXAMPLE2_MONSTER_H

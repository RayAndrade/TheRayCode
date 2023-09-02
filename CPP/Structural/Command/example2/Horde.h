//
// Created by ray on 9/1/23.
//

#ifndef EXAMPLE2_HORDE_H
#define EXAMPLE2_HORDE_H

#include "Creature.h"
#include <vector>

// Composite class that can contain both individual monsters and groups of monsters
class Horde : public Creature {
public:
    void add(Creature* creature) {
        monsters.push_back(creature);
    }

    void scare() const override {
        std::cout << "A horde appears!" << std::endl;
        for (const auto& monster : monsters) {
            monster->scare();
        }
    }

    ~Horde() {
        for (auto& monster : monsters) {
            delete monster;
        }
    }

private:
    std::vector<Creature*> monsters;
};

#endif //EXAMPLE2_HORDE_H

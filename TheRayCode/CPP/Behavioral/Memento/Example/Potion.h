//
// Created by ray on 9/21/23.
//

#ifndef EXAMPLE_POTION_H
#define EXAMPLE_POTION_H

#include <string>

class Potion {
private:
    std::string spell;

public:
    Potion(const std::string &s) : spell(s) {}

    std::string getSpell() const {
        return spell;
    }
};


#endif //EXAMPLE_POTION_H

//
// Created by ray on 9/21/23.
//

#ifndef EXAMPLE_WIZARD_H
#define EXAMPLE_WIZARD_H

#include "Potion.h"
#include <iostream>
#include <string>

class Wizard {
private:
    std::string currentSpell;

public:
    void conjure(const std::string &s) {
        currentSpell = s;
        std::cout << "Wizard: Conjuring the spell " << s << "!" << std::endl;
    }

    Potion brewPotion() {
        std::cout << "Wizard: Brewing a potion to remember the spell." << std::endl;
        return Potion(currentSpell);
    }

    void drinkPotion(const Potion &p) {
        currentSpell = p.getSpell();
        std::cout << "Wizard: Recalling the spell after drinking potion: " << currentSpell << "!" << std::endl;
    }
};


#endif //EXAMPLE_WIZARD_H

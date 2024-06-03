//
// Created by ray on 5/30/24.
//

#ifndef SHOW_DOMESTICCAT_H
#define SHOW_DOMESTICCAT_H

#include "Cat.h"

class DomesticCat : public Cat {
public:
    std::string makeSound() const override {
        return "Meow! I'm a Domestic Cat!";
    }

    std::string getName() const override {
        return "Domestic Cat";
    }
};

#endif //SHOW_DOMESTICCAT_H

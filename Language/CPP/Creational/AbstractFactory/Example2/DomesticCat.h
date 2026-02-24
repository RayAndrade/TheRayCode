//
// Created by ray on 11/3/23.
//

#ifndef BEGINNING_DOMESTICCAT_H
#define BEGINNING_DOMESTICCAT_H

#include "Cat.h"

// Concrete class for a generic Domestic Cat
class DomesticCat : public Cat {
public:
    std::string makeSound() const override {
        return "Meow! I'm a Domestic Cat!";
    }
    std::string getName() const override {
        return "Domestic Cat";
    }
};

#endif //BEGINNING_DOMESTICCAT_H

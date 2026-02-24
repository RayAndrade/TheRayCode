//
// Created by ray on 11/3/23.
//

#ifndef BEGINNING_PERSIAN_H
#define BEGINNING_PERSIAN_H

#include "Cat.h"

// Concrete class for a generic Persian Cat
class Persian : public Cat {
public:
    std::string makeSound() const override {
        return "Meow-ish! I'm a Persian Cat!";
    }
    std::string getName() const override {
        return "Persian Cat";
    }
};

#endif //BEGINNING_PERSIAN_H

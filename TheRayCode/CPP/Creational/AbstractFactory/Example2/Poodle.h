//
// Created by ray on 11/3/23.
//

#ifndef BEGINNING_POODLE_H
#define BEGINNING_POODLE_H

#include "Dog.h"

// Concrete class for Poodle, a domestic dog
class Poodle : public Dog {
public:
    std::string makeSound() const override {
        return "Woof! I'm a Poodle!";
    }
    std::string getName() const override {
        return "Poodle";
    }
};

#endif //BEGINNING_POODLE_H

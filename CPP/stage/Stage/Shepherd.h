//
// Created by ray on 11/3/23.
//

#ifndef BEGINNING_SHEPHERD_H
#define BEGINNING_SHEPHERD_H


#include "Dog.h"

// Concrete class for Poodle, a domestic dog
class Shepherd : public Dog {
public:
    std::string makeSound() const override {
        return "Woof! I'm a Shepherd!";
    }
    std::string getName() const override {
        return "Shepherd";
    }
};
#endif //BEGINNING_SHEPHERD_H

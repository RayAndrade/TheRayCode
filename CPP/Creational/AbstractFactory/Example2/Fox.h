//
// Created by ray on 11/3/23.
//

#ifndef BEGINNING_FOX_H
#define BEGINNING_FOX_H

#include "Dog.h"

// Concrete class for Fox, a wild dog
class Fox : public Dog {
public:
    std::string makeSound() const override {
        return "Laugh! I'm a Fox!";
    }
    std::string getName() const override {
        return "Fox";
    }
};

#endif //BEGINNING_FOX_H

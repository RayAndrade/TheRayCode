//
// Created by ray on 11/3/23.
//

#ifndef BEGINNING_HYENA_H
#define BEGINNING_HYENA_H

#include "Dog.h"

// Concrete class for Hyena, a wild dog
class Hyena : public Dog {
public:
    std::string makeSound() const override {
        return "Laugh! I'm a Hyena!";
    }
    std::string getName() const override {
        return "Hyena";
    }
};

#endif //BEGINNING_HYENA_H

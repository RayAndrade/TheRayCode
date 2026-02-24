//
// Created by ray on 11/3/23.
//

#ifndef BEGINNING_COLLIE_H
#define BEGINNING_COLLIE_H

#include "Dog.h"

// Concrete class for Hyena, a wild dog
class Collie : public Dog {
public:
    std::string makeSound() const override {
        return "Laugh! I'm a Collie!";
    }
    std::string getName() const override {
        return "Collie";
    }
};

#endif //BEGINNING_COLLIE_H

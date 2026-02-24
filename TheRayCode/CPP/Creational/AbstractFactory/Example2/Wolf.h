//
// Created by ray on 11/3/23.
//

#ifndef BEGINNING_WOLF_H
#define BEGINNING_WOLF_H


#include "Dog.h"

// Concrete class for Hyena, a wild dog
class Wolf : public Dog {
public:
    std::string makeSound() const override {
        return "Laugh! I'm a Wolf!";
    }
    std::string getName() const override {
        return "Wolf";
    }
};


#endif //BEGINNING_WOLF_H

//
// Created by ray on 11/3/23.
//

#ifndef BEGINNING_CHEETAH_H
#define BEGINNING_CHEETAH_H

#include "Cat.h"

// Concrete class for Cheetah, a wild cat
class Cheetah : public Cat {
public:
    std::string makeSound() const override {
        return "Roar! I'm a Cheetah!";
    }
    std::string getName() const override {
        return "Cheetah";
    }
};

#endif //BEGINNING_CHEETAH_H

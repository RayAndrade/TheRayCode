//
// Created by ray on 11/3/23.
//

#ifndef BEGINNING_TIGER_H
#define BEGINNING_TIGER_H

#include "Cat.h"

// Concrete class for Lion, a wild cat
class Tiger : public Cat {
public:
    std::string makeSound() const override {
        return "Roar! I'm a Tiger!";
    }
    std::string getName() const override {
        return "Tiger";
    }
};

#endif //BEGINNING_TIGER_H

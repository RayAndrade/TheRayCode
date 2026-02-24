//
// Created by ray on 11/3/23.
//

#ifndef BEGINNING_LION_H
#define BEGINNING_LION_H

#include "Cat.h"

// Concrete class for Lion, a wild cat
class Lion : public Cat {
public:
    std::string makeSound() const override {
        return "Roar! I'm a Lion!";
    }
    std::string getName() const override {
        return "Lion";
    }
};
#endif //BEGINNING_LION_H

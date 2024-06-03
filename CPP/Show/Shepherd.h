//
// Created by ray on 5/30/24.
//

#ifndef SHOW_SHEPHERD_H
#define SHOW_SHEPHERD_H

#include "Dog.h"

class Shepherd : public Dog {
public:
    std::string makeSound() const override {
        return "Woof! I'm a Shepherd!";
    }

    std::string getName() const override {
        return "Shepherd";
    }
};

#endif //SHOW_SHEPHERD_H

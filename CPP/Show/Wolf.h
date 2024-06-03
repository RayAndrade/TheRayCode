//
// Created by ray on 5/30/24.
//

#ifndef SHOW_WOLF_H
#define SHOW_WOLF_H

#include "Dog.h"

class Wolf : public Dog {
public:
    std::string makeSound() const override {
        return "Laugh! I'm a Wolf!";
    }

    std::string getName() const override {
        return "Wolf";
    }
};

#endif //SHOW_WOLF_H

//
// Created by ray on 5/30/24.
//

#ifndef SHOW_HYENA_H
#define SHOW_HYENA_H

#include "Dog.h"

class Hyena : public Dog {
public:
    std::string makeSound() const override {
        return "Laugh! I'm a Hyena!";
    }

    std::string getName() const override {
        return "Hyena";
    }
};

#endif //SHOW_HYENA_H

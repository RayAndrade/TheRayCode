//
// Created by ray on 5/30/24.
//

#ifndef SHOW_FOX_H
#define SHOW_FOX_H

#include "Dog.h"

class Fox : public Dog {
public:
    std::string makeSound() const override {
        return "Laugh! I'm a Fox!";
    }

    std::string getName() const override {
        return "Fox";
    }
};

#endif //SHOW_FOX_H

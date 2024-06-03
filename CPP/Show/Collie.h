//
// Created by ray on 5/30/24.
//

#ifndef SHOW_COLLIE_H
#define SHOW_COLLIE_H

#include "Dog.h"

class Collie : public Dog {
public:
    std::string makeSound() const override {
        return "Laugh! I'm a Collie!";
    }

    std::string getName() const override {
        return "Collie";
    }
};

#endif //SHOW_COLLIE_H

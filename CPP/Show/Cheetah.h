//
// Created by ray on 5/30/24.
//

#ifndef SHOW_CHEETAH_H
#define SHOW_CHEETAH_H

#include "Cat.h"

class Cheetah : public Cat {
public:
    std::string makeSound() const override {
        return "Roar! I'm a Cheetah!";
    }

    std::string getName() const override {
        return "Cheetah";
    }
};

#endif //SHOW_CHEETAH_H

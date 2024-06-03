//
// Created by ray on 5/30/24.
//

#ifndef SHOW_TIGER_H
#define SHOW_TIGER_H

#include "Cat.h"

class Tiger : public Cat {
public:
    std::string makeSound() const override {
        return "Roar! I'm a Tiger!";
    }

    std::string getName() const override {
        return "Tiger";
    }
};

#endif //SHOW_TIGER_H

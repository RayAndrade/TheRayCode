//
// Created by ray on 5/30/24.
//

#ifndef SHOW_LION_H
#define SHOW_LION_H

#include "Cat.h"

class Lion : public Cat {
public:
    std::string makeSound() const override {
        return "Roar! I'm a Lion!";
    }

    std::string getName() const override {
        return "Lion";
    }
};

#endif //SHOW_LION_H

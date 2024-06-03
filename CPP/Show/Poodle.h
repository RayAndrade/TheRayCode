//
// Created by ray on 5/30/24.
//

#ifndef SHOW_POODLE_H
#define SHOW_POODLE_H

#include "Dog.h"

class Poodle : public Dog {
public:
    std::string makeSound() const override {
        return "Woof! I'm a Poodle!";
    }

    std::string getName() const override {
        return "Poodle";
    }

};

#endif //SHOW_POODLE_H

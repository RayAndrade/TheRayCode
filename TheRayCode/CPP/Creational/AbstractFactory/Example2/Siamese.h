//
// Created by ray on 11/3/23.
//

#ifndef BEGINNING_SIAMESE_H
#define BEGINNING_SIAMESE_H

#include "Cat.h"

class Siamese : public Cat {
public:
    std::string makeSound() const override {
        return "Prrr..! I'm a Siamese Cat!";
    }
    std::string getName() const override {
        return "Siamese Cat";
    }
};
#endif //BEGINNING_SIAMESE_H

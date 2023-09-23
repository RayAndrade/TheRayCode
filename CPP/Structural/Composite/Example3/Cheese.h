//
// Created by ray on 9/22/23.
//

#ifndef EXAMPLE3_CHEESE_H
#define EXAMPLE3_CHEESE_H

#include "Ingredient.h"

class Cheese : public Ingredient {
public:
    void display() const override {
        std::cout << "Cheese";
    }
};

#endif //EXAMPLE3_CHEESE_H

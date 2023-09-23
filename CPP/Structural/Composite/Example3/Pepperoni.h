//
// Created by ray on 9/22/23.
//

#ifndef EXAMPLE3_PEPPERONI_H
#define EXAMPLE3_PEPPERONI_H

#include "Ingredient.h"

class Pepperoni : public Ingredient {
public:
    void display() const override {
        std::cout << "Pepperoni";
    }
};

#endif //EXAMPLE3_PEPPERONI_H

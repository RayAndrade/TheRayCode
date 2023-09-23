//
// Created by ray on 9/22/23.
//

#ifndef EXAMPLE3_INGREDIENT_H
#define EXAMPLE3_INGREDIENT_H

#include <iostream>

class Ingredient {
public:
    virtual ~Ingredient() = default;
    virtual void display() const = 0;  // abstract method to display the ingredient
};

#endif //EXAMPLE3_INGREDIENT_H

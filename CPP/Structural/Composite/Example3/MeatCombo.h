//
// Created by ray on 9/22/23.
//

#ifndef EXAMPLE3_MEATCOMBO_H
#define EXAMPLE3_MEATCOMBO_H

#include "ComboIngredient.h"

class MeatCombo : public ComboIngredient {
public:
    void display() const override {
        std::cout << "Meat Combo (";
        ComboIngredient::display();
        std::cout << "\b\b)";  // remove the last comma and space
    }
};

#endif //EXAMPLE3_MEATCOMBO_H

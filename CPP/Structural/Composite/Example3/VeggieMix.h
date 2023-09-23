//
// Created by ray on 9/22/23.
//

#ifndef EXAMPLE3_VEGGIEMIX_H
#define EXAMPLE3_VEGGIEMIX_H

#include "ComboIngredient.h"

class VeggieMix : public ComboIngredient {
public:
    void display() const override {
        std::cout << "Veggie Mix (";
        ComboIngredient::display();
        std::cout << "\b\b)";  // remove the last comma and space
    }
};

#endif //EXAMPLE3_VEGGIEMIX_H

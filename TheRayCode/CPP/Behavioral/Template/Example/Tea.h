//
// Created by ray on 9/19/23.
//

#ifndef EXAMPLE_TEA_H
#define EXAMPLE_TEA_H

#include "Beverage.h"

class Tea : public Beverage {
protected:
    void brew() const override {
        std::cout << "Steeping the tea\n";
    }

    void addCondiments() const override {
        std::cout << "Adding lemon\n";
    }
};

#endif //EXAMPLE_TEA_H

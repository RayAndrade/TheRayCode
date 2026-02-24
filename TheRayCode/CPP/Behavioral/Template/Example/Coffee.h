//
// Created by ray on 9/19/23.
//

#ifndef EXAMPLE_COFFEE_H
#define EXAMPLE_COFFEE_H

#include "Beverage.h"

class Coffee : public Beverage {
protected:
    void brew() const override {
        std::cout << "Dripping coffee through filter\n";
    }

    void addCondiments() const override {
        std::cout << "Adding sugar and milk\n";
    }
};

#endif //EXAMPLE_COFFEE_H

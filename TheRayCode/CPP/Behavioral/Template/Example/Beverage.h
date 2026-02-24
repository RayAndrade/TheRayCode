//
// Created by ray on 9/19/23.
//

#ifndef EXAMPLE_BEVERAGE_H
#define EXAMPLE_BEVERAGE_H

#include <iostream>

class Beverage {
public:
    // Template method
    void prepareRecipe() {
        boilWater();
        brew();
        pourInCup();
        addCondiments();
    }

protected:
    void boilWater() const {
        std::cout << "Boiling water\n";
    }

    virtual void brew() const = 0;

    void pourInCup() const {
        std::cout << "Pouring into cup\n";
    }

    virtual void addCondiments() const = 0;
};

#endif //EXAMPLE_BEVERAGE_H

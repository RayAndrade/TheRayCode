//
// Created by ray on 1/11/24.
//

#ifndef EXAMPLE_PARENT_H
#define EXAMPLE_PARENT_H

#include "DishWasher.h"

class Parent : public DishWasher {
public:
    void washDishes(const std::string& dishType) override {
        if (dishType == "Pot") {
            std::cout << "Parent: Alright, I'll wash the pot.\n";
        } else {
            std::cout << "Parent: Not my responsibility! Passing it on...\n";
            if (nextWasher) nextWasher->washDishes(dishType);
        }
    }
};

#endif //EXAMPLE_PARENT_H

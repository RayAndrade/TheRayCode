//
// Created by ray on 8/12/23.
//

#ifndef EXAMPLE1_PARENT_H
#define EXAMPLE1_PARENT_H

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

#endif //EXAMPLE1_PARENT_H

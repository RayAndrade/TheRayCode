//
// Created by ray on 1/11/24.
//

#ifndef EXAMPLE_ROBOT_H
#define EXAMPLE_ROBOT_H

#include "DishWasher.h"

class Robot : public DishWasher {
public:
    void washDishes(const std::string& dishType) override {
        std::cout << "Robot: Fine humans, I'll wash the " << dishType << ".\n";
    }
};

#endif //EXAMPLE_ROBOT_H

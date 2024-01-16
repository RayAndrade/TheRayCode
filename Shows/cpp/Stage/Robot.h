//
// Created by ray on 1/15/24.
//

#ifndef BEGINNING_ROBOT_H
#define BEGINNING_ROBOT_H

#include "DishWasher.h"

class Robot : public DishWasher {
public:
    void washDishes(const std::string& dishType) override {
        std::cout << "Robot: Fine humans, I'll wash the " << dishType << ".\n";
    }
};

#endif //BEGINNING_ROBOT_H

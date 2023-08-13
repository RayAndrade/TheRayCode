//
// Created by ray on 8/12/23.
//

#ifndef EXAMPLE1_ROBOT_H
#define EXAMPLE1_ROBOT_H

#include "DishWasher.h"

class Robot : public DishWasher {
public:
    void washDishes(const std::string& dishType) override {
        std::cout << "Robot: Fine humans, I'll wash the " << dishType << ".\n";
    }
};


#endif //EXAMPLE1_ROBOT_H

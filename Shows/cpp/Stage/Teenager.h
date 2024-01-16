//
// Created by ray on 1/15/24.
//

#ifndef BEGINNING_TEENAGER_H
#define BEGINNING_TEENAGER_H

#include "DishWasher.h"

class Teenager : public DishWasher {
public:
    void washDishes(const std::string& dishType) override {
        if (dishType == "Plate") {
            std::cout << "Teenager: Fine! I'll wash the plate.\n";
        } else {
            std::cout << "Teenager: Not my job! Passing it on...\n";
            if (nextWasher) nextWasher->washDishes(dishType);
        }
    }
};
#endif //BEGINNING_TEENAGER_H

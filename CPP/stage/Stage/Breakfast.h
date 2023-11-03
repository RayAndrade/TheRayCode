//
// Created by ray on 11/3/23.
//

#ifndef BEGINNING_BREAKFAST_H
#define BEGINNING_BREAKFAST_H

#include "Meal.h"

// Concrete class for Breakfast
class Breakfast : public Meal {
public:
    std::string getName() const override {
        return "Breakfast";
    }
};

#endif //BEGINNING_BREAKFAST_H

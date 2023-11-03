//
// Created by ray on 11/3/23.
//

#ifndef BEGINNING_DINNER_H
#define BEGINNING_DINNER_H

#include "Meal.h"

// Concrete class for Breakfast
class Dinner : public Meal {
public:
    std::string getName() const override {
        return "Dinner";
    }
};

#endif //BEGINNING_DINNER_H

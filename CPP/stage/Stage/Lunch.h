//
// Created by ray on 11/3/23.
//

#ifndef BEGINNING_LUNCH_H
#define BEGINNING_LUNCH_H

#include "Meal.h"

// Concrete class for Breakfast
class Lunch : public Meal {
public:
    std::string getName() const override {
        return "Lunch";
    }
};

#endif //BEGINNING_LUNCH_H

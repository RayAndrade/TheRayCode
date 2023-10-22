//
// Created by ray on 10/22/23.
//

#ifndef EXAMPLE2_BREAKFAST_H
#define EXAMPLE2_BREAKFAST_H

#include "Meal.h"

// Concrete class for Breakfast
class Breakfast : public Meal {
public:
    std::string getName() const override {
        return "Breakfast";
    }
};

#endif //EXAMPLE2_BREAKFAST_H

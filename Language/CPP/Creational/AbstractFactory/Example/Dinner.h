//
// Created by ray on 10/22/23.
//

#ifndef EXAMPLE2_DINNER_H
#define EXAMPLE2_DINNER_H

#include "Meal.h"

// Concrete class for Breakfast
class Dinner : public Meal {
public:
    std::string getName() const override {
        return "Dinner";
    }
};


#endif //EXAMPLE2_DINNER_H

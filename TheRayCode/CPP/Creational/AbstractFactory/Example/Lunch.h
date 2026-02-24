//
// Created by ray on 10/22/23.
//

#ifndef EXAMPLE2_LUNCH_H
#define EXAMPLE2_LUNCH_H

#include "Meal.h"

// Concrete class for Breakfast
class Lunch : public Meal {
public:
    std::string getName() const override {
        return "Lunch";
    }
};


#endif //EXAMPLE2_LUNCH_H

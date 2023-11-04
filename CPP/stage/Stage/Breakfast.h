//
// Created by ray on 11/3/23.
//

#ifndef BEGINNING_BREAKFAST_H
#define BEGINNING_BREAKFAST_H

#include "Meal.h"

class Breakfast : public Meal {
public:
    std::string getName() const {
        return "Breakfast";
    }
};

#endif //BEGINNING_BREAKFAST_H

//
// Created by ray on 11/3/23.
//

#ifndef BEGINNING_LUNCH_H
#define BEGINNING_LUNCH_H

#include "Meal.h"

class Lunch  : public Meal{
public:
    std::string getName() const {
        return "Lunch";
    }
};

#endif //BEGINNING_LUNCH_H

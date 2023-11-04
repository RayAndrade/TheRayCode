//
// Created by ray on 11/3/23.
//

#ifndef BEGINNING_LUNCHFACTORY_H
#define BEGINNING_LUNCHFACTORY_H

#include "MealFactory.h"
#include "Lunch.h"

class LunchFactory  : public MealFactory {
public:
    Meal* createMeal() const override {
        return new Lunch();
    }
};

#endif //BEGINNING_LUNCHFACTORY_H

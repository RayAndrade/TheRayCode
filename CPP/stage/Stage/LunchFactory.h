//
// Created by ray on 11/3/23.
//

#ifndef BEGINNING_LUNCHFACTORY_H
#define BEGINNING_LUNCHFACTORY_H

#include "MealFactory.h"
#include "Breakfast.h"
#include "Lunch.h"
#include "Dinner.h"
#include "Dessert.h"

// Concrete factory for Breakfast
class LunchFactory : public MealFactory {
public:
    Meal* createMeal() const override {
        return new Lunch();
    }
};

#endif //BEGINNING_LUNCHFACTORY_H

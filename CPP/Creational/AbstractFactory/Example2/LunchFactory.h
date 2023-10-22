//
// Created by ray on 10/22/23.
//

#ifndef EXAMPLE2_LUNCHFACTORY_H
#define EXAMPLE2_LUNCHFACTORY_H

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

#endif //EXAMPLE2_LUNCHFACTORY_H

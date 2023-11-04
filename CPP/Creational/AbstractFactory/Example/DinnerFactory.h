//
// Created by ray on 10/22/23.
//

#ifndef EXAMPLE2_DINNERFACTORY_H
#define EXAMPLE2_DINNERFACTORY_H

#include "MealFactory.h"
#include "Breakfast.h"
#include "Lunch.h"
#include "Dinner.h"
#include "Dessert.h"

// Concrete factory for Breakfast
class DinnerFactory : public MealFactory {
public:
    Meal* createMeal() const override {
        return new Dinner();
    }
};

#endif //EXAMPLE2_DINNERFACTORY_H

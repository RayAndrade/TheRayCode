//
// Created by ray on 11/3/23.
//

#ifndef BEGINNING_MEALFACTORY_H
#define BEGINNING_MEALFACTORY_H

#include "Meal.h"

class MealFactory {
public:
    virtual ~MealFactory() {}
    virtual Meal* createMeal() const = 0; // Creates a meal, to be implemented by concrete factories
};

#endif //BEGINNING_MEALFACTORY_H

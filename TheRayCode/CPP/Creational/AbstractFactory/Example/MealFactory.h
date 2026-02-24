//
// Created by ray on 10/22/23.
//

#ifndef EXAMPLE2_MEALFACTORY_H
#define EXAMPLE2_MEALFACTORY_H

#include "Meal.h"

// Abstract Factory for meals
class MealFactory {
public:
    virtual ~MealFactory() {}
    virtual Meal* createMeal() const = 0; // Creates a meal, to be implemented by concrete factories
};

#endif //EXAMPLE2_MEALFACTORY_H

//
// Created by ray on 10/22/23.
//

#ifndef EXAMPLE2_CONCRETEMEALFACTORY_H
#define EXAMPLE2_CONCRETEMEALFACTORY_H

#include "MealFactory.h"
#include "Breakfast.h"
#include "Lunch.h"
#include "Dinner.h"
#include "Dessert.h"

// Concrete factory for Breakfast
class BreakfastFactory : public MealFactory {
public:
    Meal* createMeal() const override {
        return new Breakfast();
    }
};

// Similarly, define LunchFactory, DinnerFactory, and DessertFactory following the same pattern.


#endif //EXAMPLE2_CONCRETEMEALFACTORY_H

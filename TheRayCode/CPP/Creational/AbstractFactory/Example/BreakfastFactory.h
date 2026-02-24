//
// Created by ray on 10/22/23.
//

#ifndef EXAMPLE2_BREAKFASTFACTORY_H
#define EXAMPLE2_BREAKFASTFACTORY_H

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

#endif //EXAMPLE2_BREAKFASTFACTORY_H

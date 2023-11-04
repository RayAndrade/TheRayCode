//
// Created by ray on 11/3/23.
//

#ifndef BEGINNING_BREAKFASTFACTORY_H
#define BEGINNING_BREAKFASTFACTORY_H

#include "MealFactory.h"
#include "Breakfast.h"
#include "Lunch.h"
#include "Dinner.h"
#include "Dessert.h"

class BreakfastFactory : public MealFactory  {
    Meal* createMeal() const override {
        return reinterpret_cast<Meal *>(new Breakfast());
    }
};

#endif //BEGINNING_BREAKFASTFACTORY_H

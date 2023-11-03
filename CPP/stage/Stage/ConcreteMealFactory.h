//
// Created by ray on 11/3/23.
//

#ifndef BEGINNING_CONCRETEMEALFACTORY_H
#define BEGINNING_CONCRETEMEALFACTORY_H

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
#endif //BEGINNING_CONCRETEMEALFACTORY_H

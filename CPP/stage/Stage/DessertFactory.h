//
// Created by ray on 11/3/23.
//

#ifndef BEGINNING_DESSERTFACTORY_H
#define BEGINNING_DESSERTFACTORY_H

#include "MealFactory.h"
#include "Breakfast.h"
#include "Lunch.h"
#include "Dinner.h"
#include "Dessert.h"

// Concrete factory for Dessert
class DessertFactory : public MealFactory {
public:
    Meal* createMeal() const override {
        return new Dessert();
    }
};
#endif //BEGINNING_DESSERTFACTORY_H

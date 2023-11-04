//
// Created by ray on 10/22/23.
//

#ifndef EXAMPLE2_DESSERTFACTORY_H
#define EXAMPLE2_DESSERTFACTORY_H

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


#endif //EXAMPLE2_DESSERTFACTORY_H

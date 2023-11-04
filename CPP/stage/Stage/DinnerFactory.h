//
// Created by ray on 11/3/23.
//

#ifndef BEGINNING_DINNERFACTORY_H
#define BEGINNING_DINNERFACTORY_H

#include "MealFactory.h"
#include "Breakfast.h"
#include "Lunch.h"
#include "Dinner.h"
#include "Dessert.h"

class DinnerFactory {
public:
    Meal* createMeal() const {
        return reinterpret_cast<Meal *>(new Dinner());
    }
};

#endif //BEGINNING_DINNERFACTORY_H

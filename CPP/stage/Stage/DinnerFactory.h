//
// Created by ray on 11/3/23.
//

#ifndef BEGINNING_DINNERFACTORY_H
#define BEGINNING_DINNERFACTORY_H

#include "MealFactory.h"
#include "Dinner.h"

class DinnerFactory : public MealFactory {
public:
    Meal* createMeal() const {
        return new Dinner();
    }
};

#endif //BEGINNING_DINNERFACTORY_H

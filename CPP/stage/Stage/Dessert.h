//
// Created by ray on 11/3/23.
//

#ifndef BEGINNING_DESSERT_H
#define BEGINNING_DESSERT_H

#include "Meal.h"

// Concrete class for Breakfast
class Dessert : public Meal {
public:
    std::string getName() const override {
        return "Dessert";
    }
};
#endif //BEGINNING_DESSERT_H

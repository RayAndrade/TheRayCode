//
// Created by ray on 10/22/23.
//

#ifndef EXAMPLE2_DESSERT_H
#define EXAMPLE2_DESSERT_H

#include "Meal.h"

// Concrete class for Breakfast
class Dessert : public Meal {
public:
    std::string getName() const override {
        return "Dessert";
    }
};

#endif //EXAMPLE2_DESSERT_H

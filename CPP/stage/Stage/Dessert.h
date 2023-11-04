//
// Created by ray on 11/3/23.
//

#ifndef BEGINNING_DESSERT_H
#define BEGINNING_DESSERT_H

#include "Meal.h"

class Dessert  : public Meal{
public:
    std::string getName() const {
        return "Dessert";
    }
};


#endif //BEGINNING_DESSERT_H

//
// Created by ray on 11/3/23.
//

#ifndef BEGINNING_MEAL_H
#define BEGINNING_MEAL_H

#include <string>

class Meal {
public:
    virtual ~Meal() {}
    virtual std::string getName() const = 0; // Returns the name of the meal
};

#endif //BEGINNING_MEAL_H

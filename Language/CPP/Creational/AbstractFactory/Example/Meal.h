//
// Created by ray on 10/22/23.
//

#ifndef EXAMPLE2_MEAL_H
#define EXAMPLE2_MEAL_H

#include <string>

// Abstract base class for a meal
class Meal {
public:
    virtual ~Meal() {}
    virtual std::string getName() const = 0; // Returns the name of the meal
};

#endif //EXAMPLE2_MEAL_H

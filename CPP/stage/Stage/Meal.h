//
// Created by ray on 11/3/23.
//

#ifndef SHOW_MEAL_H
#define SHOW_MEAL_H
#include <string>

class Meal {
public:
    virtual ~Meal() {}
    virtual std::string getName() const = 0;
};

#endif //SHOW_MEAL_H

//
// Created by ray on 1/11/24.
//

#ifndef EXAMPLE_DISHWASHER_H
#define EXAMPLE_DISHWASHER_H

#include <iostream>
#include <memory>

class DishWasher {
public:
    virtual ~DishWasher() = default;
    void setNext(std::shared_ptr<DishWasher> nextWasher) { this->nextWasher = nextWasher; }
    virtual void washDishes(const std::string& dishType) = 0;

protected:
    std::shared_ptr<DishWasher> nextWasher;
};


#endif //EXAMPLE_DISHWASHER_H

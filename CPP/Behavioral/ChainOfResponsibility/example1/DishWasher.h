//
// Created by ray on 8/12/23.
//

#ifndef EXAMPLE1_DISHWASHER_H
#define EXAMPLE1_DISHWASHER_H

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

#endif //EXAMPLE1_DISHWASHER_H

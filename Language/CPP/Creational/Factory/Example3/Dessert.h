//
// Created by ray on 10/21/23.
//

#ifndef EXAMPLE3_DESSERT_H
#define EXAMPLE3_DESSERT_H

#include <string>

// Abstract base class representing a general dessert
class Dessert {
public:
    virtual ~Dessert() {}
    virtual std::string getName() const = 0; // Retrieve the dessert name
    virtual void prepare() = 0; // Prepare the dessert, details depend on the dessert type
};

#endif //EXAMPLE3_DESSERT_H

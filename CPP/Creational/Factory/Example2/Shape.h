//
// Created by ray on 10/21/23.
//

#ifndef EXAMPLE2_SHAPE_H
#define EXAMPLE2_SHAPE_H

#include <iostream>

// Base class
class Shape {
public:
    // Virtual function for polymorphism
    virtual void draw() const = 0;

    virtual ~Shape() = default; // Virtual destructor for proper cleanup
};

#endif //EXAMPLE2_SHAPE_H

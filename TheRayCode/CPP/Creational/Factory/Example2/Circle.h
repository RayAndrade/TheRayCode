//
// Created by ray on 10/21/23.
//

#ifndef EXAMPLE2_CIRCLE_H
#define EXAMPLE2_CIRCLE_H

#include "Shape.h"

// Derived class
class Circle : public Shape {
public:
    void draw() const override {
        std::cout << "Inside Circle::draw() method." << std::endl;
    }
};

#endif //EXAMPLE2_CIRCLE_H

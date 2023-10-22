//
// Created by ray on 10/21/23.
//

#ifndef EXAMPLE2_SQUARE_H
#define EXAMPLE2_SQUARE_H

#include "Shape.h"

// Derived class
class Square : public Shape {
public:
    void draw() const override {
        std::cout << "Inside Square::draw() method." << std::endl;
    }
};

#endif //EXAMPLE2_SQUARE_H

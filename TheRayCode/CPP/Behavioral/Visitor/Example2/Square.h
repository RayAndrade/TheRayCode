//
// Created by ray on 9/19/23.
//

#ifndef EXAMPLE2_SQUARE_H
#define EXAMPLE2_SQUARE_H

#pragma once
#include "Shape.h"
#include "ShapeVisitor.h"

class Square : public Shape {
public:
    Square(double side) : side(side) {}

    void draw() const override {
        // Draw the square
    }

    void accept(ShapeVisitor& visitor) override {
        visitor.visitSquare(*this);
    }

    double getSide() const { return side; }

private:
    double side;
};

#endif //EXAMPLE2_SQUARE_H

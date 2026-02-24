//
// Created by ray on 9/19/23.
//

#ifndef EXAMPLE2_TRIANGLE_H
#define EXAMPLE2_TRIANGLE_H

#include "Shape.h"
#include "ShapeVisitor.h"

class Triangle : public Shape {
public:
    Triangle(double base, double height) : base(base), height(height) {}

    void draw() const override {
        // Draw the triangle
    }

    void accept(ShapeVisitor& visitor) override {
        visitor.visitTriangle(*this);
    }

    double getBase() const { return base; }
    double getHeight() const { return height; }

private:
    double base, height;
};

#endif //EXAMPLE2_TRIANGLE_H

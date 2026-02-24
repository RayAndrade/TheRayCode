//
// Created by ray on 9/19/23.
//

#ifndef EXAMPLE2_CIRCLE_H
#define EXAMPLE2_CIRCLE_H

#include "Shape.h"
#include "ShapeVisitor.h"

class Circle : public Shape {
public:
    Circle(double radius) : radius(radius) {}

    void draw() const override {
        // Draw the circle
    }

    void accept(ShapeVisitor& visitor) override {
        visitor.visitCircle(*this);
    }

    double getRadius() const { return radius; }

private:
    double radius;
};

#endif //EXAMPLE2_CIRCLE_H

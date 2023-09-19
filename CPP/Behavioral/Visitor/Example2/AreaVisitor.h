//
// Created by ray on 9/19/23.
//

#ifndef EXAMPLE2_AREAVISITOR_H
#define EXAMPLE2_AREAVISITOR_H

#include "ShapeVisitor.h"
#include "Circle.h"
#include "Square.h"
#include "Triangle.h"
#include <cmath>

class AreaVisitor : public ShapeVisitor {
public:
    double getArea() const { return area; }

    void visitCircle(Circle& circle) override {
        area = 3.141592653589793 * circle.getRadius() * circle.getRadius();
    }

    void visitSquare(Square& square) override {
        area = square.getSide() * square.getSide();
    }

    void visitTriangle(Triangle& triangle) override {
        area = 0.5 * triangle.getBase() * triangle.getHeight();
    }

private:
    double area = 0.0;
};

#endif //EXAMPLE2_AREAVISITOR_H

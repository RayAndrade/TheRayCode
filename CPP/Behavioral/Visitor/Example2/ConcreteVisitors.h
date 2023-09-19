//
// Created by ray on 9/18/23.
//

#ifndef EXAMPLE2_CONCRETEVISITORS_H
#define EXAMPLE2_CONCRETEVISITORS_H

#include <iostream>
#include <cmath>
#include "Visitor.h"
#include "Element.h"

class DrawVisitor : public Visitor {
public:
    void visit(Circle& circle) override {
        std::cout << "Drawing a circle with radius " << circle.getRadius() << std::endl;
    }
    void visit(Rectangle& rectangle) override {
        std::cout << "Drawing a rectangle with width " << rectangle.getWidth()
                  << " and height " << rectangle.getHeight() << std::endl;
    }
};

#endif //EXAMPLE2_CONCRETEVISITORS_H

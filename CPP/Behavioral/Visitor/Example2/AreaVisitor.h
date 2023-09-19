//
// Created by ray on 9/18/23.
//

#ifndef EXAMPLE2_AREAVISITOR_H
#define EXAMPLE2_AREAVISITOR_H

#include "Visitor.h"
#include <iostream>


class AreaVisitor : public Visitor {
public:
    void visit(Circle& circle) override {
        std::cout << "Area of circle: " << 3.14 * circle.getRadius() * circle.getRadius() << std::endl;
    }
    void visit(Rectangle& rectangle) override {
        std::cout << "Area of rectangle: " << rectangle.getWidth() * rectangle.getHeight() << std::endl;
    }
};


#endif //EXAMPLE2_AREAVISITOR_H

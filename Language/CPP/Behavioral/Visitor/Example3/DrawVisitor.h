//
// Created by ray on 9/19/23.
//

#ifndef EXAMPLE3_DRAWVISITOR_H
#define EXAMPLE3_DRAWVISITOR_H

#include "Visitor.h"
#include "Circle.h"
#include "Rectangle.h"
#include <iostream>

class DrawVisitor : public Visitor {
public:
    void visit(Circle &circle) override {
        std::cout << "Drawing Circle." << std::endl;
        circle.draw();
    }

    void visit(Rectangle &rectangle) override {
        std::cout << "Drawing Rectangle." << std::endl;
        rectangle.draw();
    }
};

#endif //EXAMPLE3_DRAWVISITOR_H

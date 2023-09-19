//
// Created by ray on 9/18/23.
//

#ifndef EXAMPLE2_VISITOR_H
#define EXAMPLE2_VISITOR_H
#include "Circle.h"
//#include "ConcreteVisitors.h"
#include "Rectangle.h"

class Circle;
class Rectangle;

class Visitor {
public:
    virtual void visit(Circle& circle) = 0;
    virtual void visit(Rectangle& rectangle) = 0;
};


#endif //EXAMPLE2_VISITOR_H

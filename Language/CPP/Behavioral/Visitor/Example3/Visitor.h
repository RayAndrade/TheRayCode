//
// Created by ray on 9/19/23.
//

#ifndef EXAMPLE3_VISITOR_H
#define EXAMPLE3_VISITOR_H

class Circle;
class Rectangle;

class Visitor {
public:
    virtual ~Visitor() = default;
    virtual void visit(Circle &circle) = 0;
    virtual void visit(Rectangle &rectangle) = 0;
};

#endif //EXAMPLE3_VISITOR_H

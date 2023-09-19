//
// Created by ray on 9/19/23.
//

#ifndef EXAMPLE2_SHAPEVISITOR_H
#define EXAMPLE2_SHAPEVISITOR_H

class Circle;
class Square;
class Triangle;

class ShapeVisitor {
public:
    virtual ~ShapeVisitor() = default;

    virtual void visitCircle(Circle& circle) = 0;
    virtual void visitSquare(Square& square) = 0;
    virtual void visitTriangle(Triangle& triangle) = 0;
};


#endif //EXAMPLE2_SHAPEVISITOR_H

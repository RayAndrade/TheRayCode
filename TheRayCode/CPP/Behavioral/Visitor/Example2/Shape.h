//
// Created by ray on 9/18/23.
//

#ifndef EXAMPLE2_SHAPE_H
#define EXAMPLE2_SHAPE_H

class ShapeVisitor;  // Forward declaration

class Shape {
public:
    virtual ~Shape() = default;

    virtual void draw() const = 0;
    virtual void accept(ShapeVisitor& visitor) = 0;  // accept a visitor
};


#endif //EXAMPLE2_SHAPE_H

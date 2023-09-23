//
// Created by ray on 9/22/23.
//

#ifndef EXAMPLE2_SHAPE_H
#define EXAMPLE2_SHAPE_H

class Shape {
public:
    virtual ~Shape() = default;
    virtual void draw() const = 0;  // abstract method to draw the shape
};


#endif //EXAMPLE2_SHAPE_H

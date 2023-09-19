//
// Created by ray on 9/19/23.
//

#ifndef EXAMPLE3_RECTANGLE_H
#define EXAMPLE3_RECTANGLE_H

#include "Shape.h"

class Rectangle : public Shape {
public:
    void accept(Visitor &v) override;
    void draw() const { /* Drawing rectangle */ }
};


#endif //EXAMPLE3_RECTANGLE_H

//
// Created by ray on 9/19/23.
//

#ifndef EXAMPLE3_SHAPE_H
#define EXAMPLE3_SHAPE_H

#include "Visitor.h"

class Visitor; // forward declaration

class Shape {
public:
    virtual ~Shape() = default;
    virtual void accept(Visitor &v) = 0;
};
#endif //EXAMPLE3_SHAPE_H

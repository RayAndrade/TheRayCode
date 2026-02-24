//
// Created by ray on 9/19/23.
//

#ifndef EXAMPLE3_CIRCLE_H
#define EXAMPLE3_CIRCLE_H

#include "Shape.h"

class Circle : public Shape {
public:
    void accept(Visitor &v) override;
    void draw() const { /* Drawing circle */ }
};

#endif //EXAMPLE3_CIRCLE_H

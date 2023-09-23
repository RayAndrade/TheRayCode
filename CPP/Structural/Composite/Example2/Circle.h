//
// Created by ray on 9/22/23.
//

#ifndef EXAMPLE2_CIRCLE_H
#define EXAMPLE2_CIRCLE_H

#include "Shape.h"
#include <iostream>

class Circle : public Shape {
public:
    void draw() const override {
        std::cout << "Drawing a circle." << std::endl;
    }
};

#endif //EXAMPLE2_CIRCLE_H

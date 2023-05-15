//
// Created by ray on 5/15/23.
//

#ifndef SHOW_RECTANGLE_H
#define SHOW_RECTANGLE_H
#include "Shape.h"
#include <iostream>

class Rectangle : public Shape{
public:
    void draw() override {
        std::cout << "Drawing Rectangle." << std::endl;
    }
};

#endif //SHOW_RECTANGLE_H

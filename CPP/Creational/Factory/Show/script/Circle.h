//
// Created by ray on 5/14/23.
//

#ifndef SHOW_CIRCLE_H
#define SHOW_CIRCLE_H

#include "Shape.h"
#include <iostream>

class Circle : public Shape {
public:
    void draw() override {
        std::cout << "Drawing Circle." << std::endl;
    }
};

#endif //SHOW_CIRCLE_H

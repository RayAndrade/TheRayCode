//
// Created by ray on 5/14/23.
//

#ifndef SHOW_SQUARE_H
#define SHOW_SQUARE_H

#include "Shape.h"
#include <iostream>

class Square : public Shape {
public:
    void draw() override {
        std::cout << "Drawing Square." << std::endl;
    }
};

#endif //SHOW_SQUARE_H

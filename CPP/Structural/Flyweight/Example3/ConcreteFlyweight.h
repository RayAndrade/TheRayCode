//
// Created by ray on 2/3/24.
//

#ifndef EXAMPLE3_CONCRETEFLYWEIGHT_H
#define EXAMPLE3_CONCRETEFLYWEIGHT_H

#include "Flyweight.h"
#include <iostream>

class ConcreteFlyweight : public Flyweight {
private:
    std::string color; // Intrinsic state shared by many objects
public:
    ConcreteFlyweight(const std::string& color) : color(color) {}
    void draw(int x, int y) const override {
        std::cout << "Drawing a " << color << " circle at (" << x << ", " << y << ")." << std::endl;
    }
};

#endif //EXAMPLE3_CONCRETEFLYWEIGHT_H

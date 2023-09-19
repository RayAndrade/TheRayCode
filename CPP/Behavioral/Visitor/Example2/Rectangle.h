//
// Created by ray on 9/18/23.
//

#ifndef EXAMPLE2_RECTANGLE_H
#define EXAMPLE2_RECTANGLE_H

#include "Element.h"

class Rectangle : public Element {
public:
    Rectangle(double w, double h) : width(w), height(h) {}
    void accept(Visitor& visitor) override {
        visitor.visit(*this);
    }
    double getWidth() const {
        return width;
    }
    double getHeight() const {
        return height;
    }
private:
    double width;
    double height;
};

#endif //EXAMPLE2_RECTANGLE_H

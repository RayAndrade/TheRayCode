//
// Created by ray on 9/18/23.
//

#ifndef EXAMPLE2_CIRCLE_H
#define EXAMPLE2_CIRCLE_H

#include "Element.h"

#include "Visitor.h"

class Circle : public Element {
public:
    Circle(double r) : radius(r) {}
    void accept(Visitor& visitor) override;
    double getRadius() const {
        return radius;
    }
private:
    double radius;
};

void Circle::accept(Visitor &visitor) {
    visitor.visit(*this);
}


#endif //EXAMPLE2_CIRCLE_H

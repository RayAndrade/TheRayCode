#include "Circle.h"
#include "Rectangle.h"
#include "DrawVisitor.h"

void Circle::accept(Visitor &v) {
    v.visit(*this);
}

void Rectangle::accept(Visitor &v) {
    v.visit(*this);
}

int main() {
    Circle circle;
    Rectangle rectangle;

    DrawVisitor drawVisitor;

    circle.accept(drawVisitor);
    rectangle.accept(drawVisitor);

    return 0;
}
#include <iostream>
//#include "Element.h"
//#include "ConcreteVisitors.h"
//#include "Circle.h"
#include "Rectangle.h"
#include "AreaVisitor.h"


int main() {
    Circle circle(5);
    Rectangle rectangle(10, 6);

    DrawVisitor drawVisitor;
    AreaVisitor areaVisitor;

    circle.accept(drawVisitor);
    rectangle.accept(drawVisitor);

    circle.accept(areaVisitor);
    rectangle.accept(areaVisitor);

    return 0;
}

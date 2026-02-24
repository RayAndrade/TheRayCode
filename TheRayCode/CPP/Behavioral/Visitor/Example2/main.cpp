#include "Circle.h"
#include "Square.h"
#include "Triangle.h"
#include "AreaVisitor.h"
#include <iostream>

int main() {
    Circle circle(5);
    Square square(4);
    Triangle triangle(3, 6);

    AreaVisitor areaVisitor;

    circle.accept(areaVisitor);
    std::cout << "Circle area: " << areaVisitor.getArea() << std::endl;

    square.accept(areaVisitor);
    std::cout << "Square area: " << areaVisitor.getArea() << std::endl;

    triangle.accept(areaVisitor);
    std::cout << "Triangle area: " << areaVisitor.getArea() << std::endl;

    return 0;

}

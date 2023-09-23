#include <iostream>
#include "Circle.h"
#include "CompoundShape.h"
#include <memory>


int main() {
    auto circle1 = std::make_shared<Circle>();
    auto circle2 = std::make_shared<Circle>();

    CompoundShape group;
    group.add(circle1);
    group.add(circle2);

    std::cout << "Drawing individual circle:" << std::endl;
    circle1->draw();

    std::cout << "\nDrawing compound shape:" << std::endl;
    group.draw();

    return 0;
}

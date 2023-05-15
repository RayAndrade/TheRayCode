#include "ShapeFactory.h"
#include <memory>

int main() {
    ShapeFactory factory;

    std::unique_ptr<Shape> shape1(factory.getShape("CIRCLE"));
    if (shape1) shape1->draw();

    std::unique_ptr<Shape> shape2(factory.getShape("SQUARE"));
    if (shape2) shape2->draw();

    std::unique_ptr<Shape> shape3(factory.getShape("RECTANGLE"));
    if (shape3) shape3->draw();
    return 0;
}

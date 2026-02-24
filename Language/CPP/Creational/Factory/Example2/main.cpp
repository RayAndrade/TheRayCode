#include "ShapeFactory.h"
#include <memory>

int main() {
    ShapeFactory shapeFactory;

    // Get an object of Circle and call its draw method.
    std::unique_ptr<Shape> shape1(shapeFactory.getShape("CIRCLE"));
    if (shape1 != nullptr) {
        shape1->draw();
    }

    // Get an object of Square and call its draw method.
    std::unique_ptr<Shape> shape2(shapeFactory.getShape("SQUARE"));
    if (shape2 != nullptr) {
        shape2->draw();
    }
    //std::cout << "The Ray Code is AWESOME!!!" << std::endl;
    return 0;
}

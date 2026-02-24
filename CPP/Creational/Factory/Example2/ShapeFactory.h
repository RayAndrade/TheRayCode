//
// Created by ray on 10/21/23.
//

#ifndef EXAMPLE2_SHAPEFACTORY_H
#define EXAMPLE2_SHAPEFACTORY_H

#include "Shape.h"
#include "Circle.h"
#include "Square.h"
#include <string>

// Factory class
class ShapeFactory {
public:
    // Use getShape method to get object of type shape
    Shape* getShape(const std::string& shapeType) {
        if (shapeType == "CIRCLE") {
            return new Circle();
        } else if (shapeType == "SQUARE") {
            return new Square();
        }
        return nullptr;
    }
};

#endif //EXAMPLE2_SHAPEFACTORY_H

//
// Created by ray on 5/15/23.
//

#ifndef SHOW_SHAPEFACTORY_H
#define SHOW_SHAPEFACTORY_H
#include "Circle.h"
#include "Square.h"
#include "Rectangle.h"
#include <string>

class ShapeFactory {
public:
    Shape* getShape(const std::string& shapeType) {
        if (shapeType == "CIRCLE") {
            return new Circle();
        } else if (shapeType == "SQUARE") {
            return new Square();
        } else if (shapeType == "RECTANGLE") {
            return new Rectangle();
        }
        return nullptr;
    }
};

#endif //SHOW_SHAPEFACTORY_H

//
// Created by ray on 9/22/23.
//

#ifndef EXAMPLE2_COMPOUNDSHAPE_H
#define EXAMPLE2_COMPOUNDSHAPE_H

#include "Shape.h"
#include <vector>
#include <memory>

class CompoundShape : public Shape {
private:
    std::vector<std::shared_ptr<Shape>> shapes;

public:
    void add(const std::shared_ptr<Shape>& shape) {
        shapes.push_back(shape);
    }

    void draw() const override {
        for (const auto& shape : shapes) {
            shape->draw();
        }
    }
};

#endif //EXAMPLE2_COMPOUNDSHAPE_H

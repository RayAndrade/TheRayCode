//
// Created by ray on 9/1/23.
//

#ifndef EXAMPLE_LEAF_H
#define EXAMPLE_LEAF_H

#include "Component.h"

// A leaf in the composite pattern. Doesn't have any children
class Circle : public Component {
public:
    void draw() const override {
        std::cout << "Drawing a circle" << std::endl;
    }
};

#endif //EXAMPLE_LEAF_H

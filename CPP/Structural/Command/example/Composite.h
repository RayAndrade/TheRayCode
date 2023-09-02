//
// Created by ray on 9/1/23.
//

#ifndef EXAMPLE_COMPOSITE_H
#define EXAMPLE_COMPOSITE_H

#include "Component.h"
#include <vector>

// Composite class that can contain both leafs (Circles) and other composites (Groups)
class Group : public Component {
public:
    void add(Component* component) {
        children.push_back(component);
    }

    void draw() const override {
        std::cout << "Drawing a group:" << std::endl;
        for (const auto& child : children) {
            child->draw();
        }
    }

    ~Group() {
        for (auto& child : children) {
            delete child;
        }
    }

private:
    std::vector<Component*> children;
};

#endif //EXAMPLE_COMPOSITE_H

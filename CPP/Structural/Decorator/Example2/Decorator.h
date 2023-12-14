//
// Created by ray on 12/13/23.
//

#ifndef EXAMPLE2_DECORATOR_H
#define EXAMPLE2_DECORATOR_H

#include "Component.h"

class Decorator : public Component {
protected:
    Component* component;

public:
    Decorator(Component* c) : component(c) {}
    void operation() override {
        if (component) {
            component->operation();
        }
    }
};

#endif //EXAMPLE2_DECORATOR_H

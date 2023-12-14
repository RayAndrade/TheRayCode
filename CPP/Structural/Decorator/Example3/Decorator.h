//
// Created by ray on 12/13/23.
//

#ifndef EXAMPLE3_DECORATOR_H
#define EXAMPLE3_DECORATOR_H


#include "Component.h"

// Base decorator class
class Decorator : public Component {
protected:
    Component* component;

public:
    Decorator(Component* c) : component(c) {}
    void operation() override {
        if (component)
            component->operation();
    }
};

#endif //EXAMPLE3_DECORATOR_H

//
// Created by ray on 12/16/23.
//

#ifndef STAGE_DECORATOR_H
#define STAGE_DECORATOR_H

#include "Component.h"

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


#endif //STAGE_DECORATOR_H
//
// Created by ray on 12/15/23.
//

#ifndef BEGINNING_DECORATOR_H
#define BEGINNING_DECORATOR_H

#include "Component.h"

class Decorator  : public Component{
protected:
    Component* component;
public:
    Decorator(Component* c) : component(c) {}

    void operation() override {
        if (component)
            component->operation();
    }
};


#endif //BEGINNING_DECORATOR_H

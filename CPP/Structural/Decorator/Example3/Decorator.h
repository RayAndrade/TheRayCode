//
// Created by ray on 12/13/23.
//

#ifndef EXAMPLE_DECORATOR_H
#define EXAMPLE_DECORATOR_H

#include "Component.h"
#include <memory>

class Decorator : public Component {
protected:
    std::shared_ptr<Component> component;
public:
    Decorator(std::shared_ptr<Component> c) : component(c) {}

    std::string operation() const override {
        return component->operation();
    }
};

#endif //EXAMPLE_DECORATOR_H

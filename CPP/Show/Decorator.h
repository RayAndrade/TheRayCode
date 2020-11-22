//
// Created by ray on 11/22/20.
//

#ifndef SHOW_DECORATOR_H
#define SHOW_DECORATOR_H

#include "Component.h"

class Decorator : public Component {
    /**
     * @var Component
     */
protected:
    Component* component_;

public:
    Decorator(Component* component) : component_(component) {
    }
    /**
     * The Decorator delegates all work to the wrapped component.
     */
    std::string Operation() const override {
        return this->component_->Operation();
    }
};
#endif //SHOW_DECORATOR_H

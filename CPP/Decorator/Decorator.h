//
// Created by ray on 8/25/20.
//

#ifndef DECORATOR_DECORATOR_H
#define DECORATOR_DECORATOR_H

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


#endif //DECORATOR_DECORATOR_H

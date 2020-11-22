//
// Created by ray on 11/22/20.
//

#ifndef SHOW_CONCRETEDECORATORA_H
#define SHOW_CONCRETEDECORATORA_H
#include "Decorator.h"

class ConcreteDecoratorA : public Decorator {
    /**
     * Decorators may call parent implementation of the operation, instead of
     * calling the wrapped object directly. This approach simplifies extension of
     * decorator classes.
     */
public:
    ConcreteDecoratorA(Component* component) : Decorator(component) {
    }
    std::string Operation() const override {
        return "ConcreteDecoratorA(" + Decorator::Operation() + ")";
    }
};

#endif //SHOW_CONCRETEDECORATORA_H

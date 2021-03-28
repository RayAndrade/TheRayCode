//
// Created by ray on 8/25/20.
//

#ifndef DECORATOR_CONCRETEDECORATORA_H
#define DECORATOR_CONCRETEDECORATORA_H
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


#endif //DECORATOR_CONCRETEDECORATORA_H

//
// Created by ray on 11/23/20.
//

#ifndef SHOW_CONCRETEDECORATORA_H
#define SHOW_CONCRETEDECORATORA_H

#include "Decorator.h"

class ConcreteDecoratorA : public Decorator {
public:
    ConcreteDecoratorA(Component* component) : Decorator(component) {
    }
    std::string Operation() const override {
        return "ConcreteDecoratorA(" + Decorator::Operation() + ")";
    }
};

#endif //SHOW_CONCRETEDECORATORA_H

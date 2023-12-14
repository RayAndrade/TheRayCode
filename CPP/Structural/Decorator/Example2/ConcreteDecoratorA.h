//
// Created by ray on 12/13/23.
//

#ifndef EXAMPLE2_CONCRETEDECORATORA_H
#define EXAMPLE2_CONCRETEDECORATORA_H

#include "Decorator.h"

class ConcreteDecoratorA : public Decorator {
public:
    ConcreteDecoratorA(Component* c) : Decorator(c) {}

    void operation() override {
        Decorator::operation();
        // Additional behavior or state
    }
};

#endif //EXAMPLE2_CONCRETEDECORATORA_H

//
// Created by ray on 11/22/20.
//

#ifndef DECORATOR_CONCRETEDECORATORB_H
#define DECORATOR_CONCRETEDECORATORB_H

#include "Decorator.h"

class ConcreteDecoratorB : public Decorator {
public:
    ConcreteDecoratorB(Component* component) : Decorator(component) {
    }

    std::string Operation() const override {
        return "ConcreteDecoratorB(" + Decorator::Operation() + ")";
    }
};


#endif //DECORATOR_CONCRETEDECORATORB_H

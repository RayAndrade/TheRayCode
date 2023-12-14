//
// Created by ray on 12/13/23.
//

#ifndef EXAMPLE2_CONCRETEDECORATORB_H
#define EXAMPLE2_CONCRETEDECORATORB_H

#include "Decorator.h"

class ConcreteDecoratorB : public Decorator {
public:
    ConcreteDecoratorB(Component* c) : Decorator(c) {}

    void operation() override {
        Decorator::operation();
        // Different additional behavior or state
    }
};

#endif //EXAMPLE2_CONCRETEDECORATORB_H

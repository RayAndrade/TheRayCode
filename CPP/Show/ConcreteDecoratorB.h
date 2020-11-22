//
// Created by ray on 11/22/20.
//

#ifndef SHOW_CONCRETEDECORATORB_H
#define SHOW_CONCRETEDECORATORB_H
#include "Decorator.h"

class ConcreteDecoratorB : public Decorator {
public:
    ConcreteDecoratorB(Component* component) : Decorator(component) {
    }

    std::string Operation() const override {
        return "ConcreteDecoratorB(" + Decorator::Operation() + ")";
    }
};



#endif //SHOW_CONCRETEDECORATORB_H

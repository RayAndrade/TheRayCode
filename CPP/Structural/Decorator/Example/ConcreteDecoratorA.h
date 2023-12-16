//
// Created by ray on 12/13/23.
//

#ifndef EXAMPLE3_CONCRETEDECORATORA_H
#define EXAMPLE3_CONCRETEDECORATORA_H

#include "Decorator.h"
#include <iostream>

// A concrete decorator adding extra features
class ConcreteDecoratorA : public Decorator {
public:
    ConcreteDecoratorA(Component* c) : Decorator(c) {}

    void operation() override {
        Decorator::operation();
        addedBehavior();
    }

private:
    void addedBehavior() {
        std::cout << "Added behavior A.\n";
    }
};

#endif //EXAMPLE3_CONCRETEDECORATORA_H

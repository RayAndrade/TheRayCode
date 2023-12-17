//
// Created by ray on 12/16/23.
//

#ifndef STAGE_CONCRETEDECORATORA_H
#define STAGE_CONCRETEDECORATORA_H

#include "Decorator.h"
#include <iostream>

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

#endif //STAGE_CONCRETEDECORATORA_H

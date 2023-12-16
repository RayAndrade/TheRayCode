//
// Created by ray on 12/15/23.
//

#ifndef BEGINNING_CONCRETEDECORATORA_H
#define BEGINNING_CONCRETEDECORATORA_H

#include "Decorator.h"
#include <iostream>

class ConcreteDecoratorA: public Decorator {
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


#endif //BEGINNING_CONCRETEDECORATORA_H

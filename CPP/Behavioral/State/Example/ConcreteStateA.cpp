//
// Created by ray on 3/9/24.
//
#include "ConcreteStateA.h"
#include "ConcreteStateB.h"
#include "Context.h"
#include <iostream>

void ConcreteStateA::handle(Context* context) {
    std::cout << "State A handling context. Switching to State B." << std::endl;
    context->setState(new ConcreteStateB());
}

void ConcreteStateB::handle(Context* context) {
    std::cout << "State B handling context. Switching to State A." << std::endl;
    context->setState(new ConcreteStateA());
}
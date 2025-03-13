//
// Created by ray on 2/23/25.
//
#include "ConcreteCreator.h"

Product* ConcreteCreatorA::factoryMethod() {
    return new ConcreteProductA();
}

Product* ConcreteCreatorB::factoryMethod() {
    return new ConcreteProductB();
}
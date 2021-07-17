//
// Created by ray on 7/16/21.
//

#ifndef ABSTRACTFACTORY_CONCRETEFACTORY1_H
#define ABSTRACTFACTORY_CONCRETEFACTORY1_H

#include "AbstractFactory.h"

class ConcreteFactory1 : public AbstractFactory {
public:
    AbstractProductA *CreateProductA() const override {
        return new ProductA1();
    }
    AbstractProductB *CreateProductB() const override {
        return new ProductB1();
    }
};


#endif //ABSTRACTFACTORY_CONCRETEFACTORY1_H

//
// Created by ray on 9/11/21.
//

#ifndef SHOW_CONCRETEFACTORY2_H
#define SHOW_CONCRETEFACTORY2_H
#include "AbstractFactory.h"
#include "AbstractProductA.h"
#include "AbstractProductB.h"

class ConcreteFactory2 : public AbstractFactory{
public:
    AbstractProductA *CreateProductA() const override {
        return new ProductA2();
    }

    AbstractProductB *CreateProductB() const override {
        return new ProductB2();
    }
};


#endif //SHOW_CONCRETEFACTORY2_H

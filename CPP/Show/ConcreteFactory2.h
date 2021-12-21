//
// Created by ray on 12/20/21.
//

#ifndef SHOW_CONCRETEFACTORY2_H
#define SHOW_CONCRETEFACTORY2_H

#include "AbstractFactory.h"
#include "ProductA2.h"
#include "ProductB2.h"

class ConcreteFactory2 : public AbstractFactory {
public:
    AbstractProductA *CreateProductA() const override {
        return new ProductA2();
    }
    AbstractProductB *CreateProductB() const override {
        return new ProductB2();
    }
};

#endif //SHOW_CONCRETEFACTORY2_H

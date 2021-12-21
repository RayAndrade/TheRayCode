//
// Created by ray on 12/20/21.
//

#ifndef SHOW_CONCRETEFACTORY1_H
#define SHOW_CONCRETEFACTORY1_H

#include "AbstractFactory.h"
#include "ProductA1.h"
#include "ProductB1.h"

class ConcreteFactory1 : public AbstractFactory {
public:
    AbstractProductA *CreateProductA() const override {
        return new ProductA1();
    }
    AbstractProductB *CreateProductB() const override {
        return new ProductB1();
    }
};

#endif //SHOW_CONCRETEFACTORY1_H

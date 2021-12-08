//
// Created by ray on 12/8/21.
//

#ifndef UNTITLED_CONCRETEFACTORY2_H
#define UNTITLED_CONCRETEFACTORY2_H
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
#endif //UNTITLED_CONCRETEFACTORY2_H

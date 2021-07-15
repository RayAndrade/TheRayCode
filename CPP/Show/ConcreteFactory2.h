#ifndef ABSTRACTFACTORY_CONCRETEFACTORY2_H
#define ABSTRACTFACTORY_CONCRETEFACTORY2_H

#include "AbstractFactory.h"

/**
 * Each Concrete Factory has a corresponding product variant.
 */
class ConcreteFactory2 : public AbstractFactory {
public:
    AbstractProductA *CreateProductA() const override {
        return new ProductA2();
    }
    AbstractProductB *CreateProductB() const override {
        return new ProductB2();
    }
};

#endif //ABSTRACTFACTORY_CONCRETEFACTORY2_H

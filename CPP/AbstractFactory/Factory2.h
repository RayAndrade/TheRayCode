#ifndef ABSTRACTFACTORY_FACTORY2_H
#define ABSTRACTFACTORY_FACTORY2_H

#include "AbstractFactory.h"

/**
 * Each Concrete Factory has a corresponding product variant.
 */
class Factory2 : public AbstractFactory {
public:
    ProductA *CreateProductA() const override {
        return new ProductA2();
    }
    ProductB *CreateProductB() const override {
        return new ProductB2();
    }
};

#endif //ABSTRACTFACTORY_FACTORY2_H

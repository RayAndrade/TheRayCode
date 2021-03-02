#ifndef ABSTRACTFACTORY_FACTORY1_H
#define ABSTRACTFACTORY_FACTORY1_H

#include "AbstractFactory.h"

/**
 * Concrete Factories produce a family of products that belong to a single
 * variant. The factory guarantees that resulting products are compatible. Note
 * that signatures of the Concrete Factory's methods return an abstract product,
 * while inside the method a concrete product is instantiated.
 */
class Factory1 : public AbstractFactory {
public:
    ProductA *CreateProductA() const override {
        return new ProductA1();
    }
    ProductB *CreateProductB() const override {
        return new ProductB1();
    }
};

#endif //ABSTRACTFACTORY_FACTORY1_H

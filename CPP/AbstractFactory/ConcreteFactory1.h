#ifndef ABSTRACTFACTORY_CONCRETEFACTORY1_H
#define ABSTRACTFACTORY_CONCRETEFACTORY1_H

#include "AbstractFactory.h"

/**
 * Concrete Factories produce a family of products that belong to a single
 * variant. The factory guarantees that resulting products are compatible. Note
 * that signatures of the Concrete Factory's methods return an abstract product,
 * while inside the method a concrete product is instantiated.
 */
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

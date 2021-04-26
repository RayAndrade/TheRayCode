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
    Product1 *CreateProductA() const override {
        return new Product1a();
    }
    Product2 *CreateProductB() const override {
        return new Product1b();
    }
};

#endif //ABSTRACTFACTORY_FACTORY1_H

#ifndef ABSTRACTFACTORY_FACTORY2_H
#define ABSTRACTFACTORY_FACTORY2_H

#include "AbstractFactory.h"

/**
 * Each Concrete Factory has a corresponding product variant.
 */
class Factory2 : public AbstractFactory {
public:
    Product1 *CreateProductA() const override {
        return new Product2a();
    }
    Product2 *CreateProductB() const override {
        return new Product2b();
    }
};

#endif //ABSTRACTFACTORY_FACTORY2_H

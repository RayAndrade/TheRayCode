#ifndef FACTORY_CONCRETECREATORA_H
#define FACTORY_CONCRETECREATORA_H

/**
 * Concrete Creators override the factory method in order to change the
 * resulting product's type.
 */

#include "Creator.h"
#include "ConcreteProductA.h"

class ConcreteCreatorA : public Creator {

/**
   * Note that the signature of the method still uses the abstract product type,
   * even though the concrete product is actually returned from the method. This
   * way the Creator can stay independent of concrete product classes.
   */

public:
    Product* FactoryMethod() const override {
        return new ConcreteProductA();
    }
};

#endif //FACTORY_CONCRETECREATORA_H

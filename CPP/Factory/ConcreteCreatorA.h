#ifndef FACTORY_CONCRETECREATORA_H
#define FACTORY_CONCRETECREATORA_H

/**
 * Concrete Products provide various implementations of the Product interface.
 */

#include "Product.h"

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

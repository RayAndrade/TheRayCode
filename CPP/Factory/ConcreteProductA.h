#ifndef FACTORY_CONCRETEPRODUCTA_H
#define FACTORY_CONCRETEPRODUCTA_H

/**
 * Concrete Products provide various implementations of the Product interface.
 */

#include "Product.h"

class ConcreteProductA : public Product {
public:
    std::string Operation() const override {
        return "{Result of the ConcreteProductA}";
    }
};

#endif //FACTORY_CONCRETEPRODUCTA_H

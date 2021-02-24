#ifndef FACTORY_CONCRETEPRODUCTA_H
#define FACTORY_CONCRETEPRODUCTA_H

/**
 * Concrete Products provide various implementations of the Product interface.
 */

#include "Product.h"

class ConcreteProductA : public Product {
public:
    std::string Operation() const override {
        return "\n{Result of the ConcreteProductA}\n";
    }
};

#endif //FACTORY_CONCRETEPRODUCTA_H

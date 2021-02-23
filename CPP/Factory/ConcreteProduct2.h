#ifndef FACTORY_CONCRETEPRODUCT2_H
#define FACTORY_CONCRETEPRODUCT2_H

/**
 * Concrete Products provide various implementations of the Product interface.
 */

#include "Product.h"

class ConcreteProduct2 : public Product {
public:
    std::string Operation() const override {
        return "{Result of the ConcreteProduct2}";
    }
};

#endif //FACTORY_CONCRETEPRODUCT2_H

#ifndef FACTORY_CONCRETEPRODUCTB_H
#define FACTORY_CONCRETEPRODUCTB_H

/**
 * Concrete Products provide various implementations of the Product interface.
 */

#include "Product.h"

class ConcreteProductB : public Product {
public:
    std::string Operation() const override {
        return "{Result of the ConcreteProductB}";
    }
};


#endif //FACTORY_CONCRETEPRODUCTB_H

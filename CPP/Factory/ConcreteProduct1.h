#ifndef FACTORY_CONCRETEPRODUCT1_H
#define FACTORY_CONCRETEPRODUCT1_H

/**
 * Concrete Products provide various implementations of the Product interface.
 */

#include "Product.h"

class ConcreteProduct1 : public Product {
public:
    std::string Operation() const override {
        return "\n{Result of the ConcreteProduct1}\n";
    }
};

#endif //FACTORY_CONCRETEPRODUCT1_H

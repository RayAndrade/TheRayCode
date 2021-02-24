#ifndef FACTORY_CONCRETECREATORB_H
#define FACTORY_CONCRETECREATORB_H


/**
 * Concrete Products provide various implementations of the Product interface.
 */

#include "Product.h"

class ConcreteCreatorB : public Product {
public:
    std::string Operation() const override {
        return "\n\n{Result of the ConcreteProductB}";
    }
};

#endif //FACTORY_CONCRETECREATORB_H

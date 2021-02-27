#ifndef FACTORY_PRODUCTB_H
#define FACTORY_PRODUCTB_H

/**
 * Concrete Products provide various implementations of the Product interface.
 */

#include "Product.h"

class ProductB : public Product {
public:
    std::string Operation() const override {
        return "{Result of the ProductB}";
    }
};


#endif //FACTORY_PRODUCTB_H

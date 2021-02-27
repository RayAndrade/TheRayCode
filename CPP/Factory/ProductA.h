#ifndef FACTORY_PRODUCTA_H
#define FACTORY_PRODUCTA_H

/**
 * Concrete Products provide various implementations of the Product interface.
 */

#include "Product.h"

class ProductA : public Product {
public:
    std::string Operation() const override {
        return "{Result of the ProductA}";
    }
};

#endif //FACTORY_PRODUCTA_H

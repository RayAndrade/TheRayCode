#ifndef ABSTRACTFACTORY_PRODUCT1A_H
#define ABSTRACTFACTORY_PRODUCT1A_H

#include "Product1.h"

/**
 * Concrete Products are created by corresponding Concrete Factories.
 */
class Product1a : public Product1 {
public:
    std::string UsefulFunctionA() const override {
        return "The result of product 1a.";
    }
};

#endif //ABSTRACTFACTORY_PRODUCT1A_H

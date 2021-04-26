#ifndef ABSTRACTFACTORY_PRODUCT1B_H
#define ABSTRACTFACTORY_PRODUCT1B_H

#include "Product2.h"
/**
 * Concrete Products are created by corresponding Concrete Factories.
 */
class Product1b : public Product2 {
public:
    std::string UsefulFunction2() const override {
        return "The result of product 1b.";
    }
    /**
     * The variant, Product B1, is only able to work correctly with the variant,
     * Product A1. Nevertheless, it accepts any instance of Product1 as an
     * argument.
     */
    std::string AnotherUsefulFunctionB(const Product1 &collaborator) const override {
        const std::string result = collaborator.UsefulFunctionA();
        return "The result of 1b collaborating with ( " + result + " )";
    }
};

#endif //ABSTRACTFACTORY_PRODUCT1B_H

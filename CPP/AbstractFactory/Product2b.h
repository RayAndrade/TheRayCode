#ifndef ABSTRACTFACTORY_PRODUCT2B_H
#define ABSTRACTFACTORY_PRODUCT2B_H

#include "Product2.h"

class Product2b : public Product2 {
public:
    std::string UsefulFunction2() const override {
        return "The result of product 2b.";
    }
    /**
     * The variant, Product B2, is only able to work correctly with the variant,
     * Product A2. Nevertheless, it accepts any instance of Product1 as an
     * argument.
     */
    std::string AnotherUsefulFunctionB(const Product1 &collaborator) const override {
        const std::string result = collaborator.UsefulFunctionA();
        return "The result of 2b collaborating with ( " + result + " )";
    }
};
#endif //ABSTRACTFACTORY_PRODUCT2B_H

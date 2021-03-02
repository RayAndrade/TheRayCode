#ifndef ABSTRACTFACTORY_PRODUCTB1_H
#define ABSTRACTFACTORY_PRODUCTB1_H

#include "ProductB.h"
/**
 * Concrete Products are created by corresponding Concrete Factories.
 */
class ProductB1 : public ProductB {
public:
    std::string UsefulFunctionB() const override {
        return "The result of the product B1.";
    }
    /**
     * The variant, Product B1, is only able to work correctly with the variant,
     * Product A1. Nevertheless, it accepts any instance of ProductA as an
     * argument.
     */
    std::string AnotherUsefulFunctionB(const ProductA &collaborator) const override {
        const std::string result = collaborator.UsefulFunctionA();
        return "The result of the B1 collaborating with ( " + result + " )";
    }
};

#endif //ABSTRACTFACTORY_PRODUCTB1_H

#ifndef ABSTRACTFACTORY_PRODUCTB2_H
#define ABSTRACTFACTORY_PRODUCTB2_H

#include "ProductB.h"

class ProductB2 : public ProductB {
public:
    std::string UsefulFunctionB() const override {
        return "The result of the product B2.";
    }
    /**
     * The variant, Product B2, is only able to work correctly with the variant,
     * Product A2. Nevertheless, it accepts any instance of ProductA as an
     * argument.
     */
    std::string AnotherUsefulFunctionB(const ProductA &collaborator) const override {
        const std::string result = collaborator.UsefulFunctionA();
        return "The result of the B2 collaborating with ( " + result + " )";
    }
};
#endif //ABSTRACTFACTORY_PRODUCTB2_H

#ifndef ABSTRACTFACTORY_PRODUCTB2_H
#define ABSTRACTFACTORY_PRODUCTB2_H

#include "AbstractProductB.h"

class ProductB2 : public AbstractProductB {
public:
    std::string UsefulFunction2() const override {
        return "The result of Product B2.";
    }
    /**
     * The variant, Product B2, is only able to work correctly with the variant,
     * Product A2. Nevertheless, it accepts any instance of AbstractProductA as an
     * argument.
     */
    std::string AnotherUsefulFunctionB(const AbstractProductA &collaborator) const override {
        const std::string result = collaborator.UsefulFunctionA();
        return "The result of B2 collaborating with ( " + result + " )";
    }
};
#endif //ABSTRACTFACTORY_PRODUCTB2_H

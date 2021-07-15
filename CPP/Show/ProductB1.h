#ifndef ABSTRACTFACTORY_PRODUCTB1_H
#define ABSTRACTFACTORY_PRODUCTB1_H

#include "AbstractProductB.h"
/**
 * Concrete Products are created by corresponding Concrete Factories.
 */
class ProductB1 : public AbstractProductB {
public:
    std::string UsefulFunction2() const override {
        return "The result of Product B1.";
    }
    /**
     * The variant, Product B1, is only able to work correctly with the variant,
     * Product A1. Nevertheless, it accepts any instance of AbstractProductA as an
     * argument.
     */
    std::string AnotherUsefulFunctionB(const AbstractProductA &collaborator) const override {
        const std::string result = collaborator.UsefulFunctionA();
        return "The result of B1 collaborating with ( " + result + " )";
    }
};

#endif //ABSTRACTFACTORY_PRODUCTB1_H

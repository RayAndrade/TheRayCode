#ifndef ABSTRACTFACTORY_PRODUCTA1_H
#define ABSTRACTFACTORY_PRODUCTA1_H

#include "ProductA.h"

/**
 * Concrete Products are created by corresponding Concrete Factories.
 */
class ProductA1 : public ProductA {
public:
    std::string UsefulFunctionA() const override {
        return "The result of the product A1.";
    }
};

#endif //ABSTRACTFACTORY_PRODUCTA1_H

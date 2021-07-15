#ifndef ABSTRACTFACTORY_PRODUCTA1_H
#define ABSTRACTFACTORY_PRODUCTA1_H

#include "AbstractProductA.h"

/**
 * Concrete Products are created by corresponding Concrete Factories.
 */
class ProductA1 : public AbstractProductA {
public:
    std::string UsefulFunctionA() const override {
        return "The result of Product A1.";
    }
};

#endif //ABSTRACTFACTORY_PRODUCTA1_H

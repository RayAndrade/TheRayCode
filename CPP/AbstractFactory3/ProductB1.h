//
// Created by ray on 9/11/21.
//

#ifndef ABSTRACTFACTORY_PRODUCTB1_H
#define ABSTRACTFACTORY_PRODUCTB1_H
#include "AbstractProductB.h"

class ProductB1 : public AbstractProductB {
public:
    std::string UsefulFunction2() const override {
        return "The result of Product B1.";
    }
    std::string AnotherUsefulFunctionB(const AbstractProductA &collaborator) const override {
        const std::string result = collaborator.UsefulFunctionA();
        return "The result of B1 collaborating with ( " + result + " )";
    }
};
#endif //ABSTRACTFACTORY_PRODUCTB1_H

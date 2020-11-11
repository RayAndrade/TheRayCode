//
// Created by ray on 8/1/20.
//

#ifndef ABSTRACT_FACTORY_SOLIDPRODUCTB1_H
#define ABSTRACT_FACTORY_SOLIDPRODUCTB1_H
#include <iostream>
#include "AbstractProductA.h"
#include "AbstractProductB.h"

class SolidProductB1 : public AbstractProductB {
public:
    std::string UsefulFunctionB() const override {
        return "The result of the product B1.";
    }
    std::string AnotherUsefulFunctionB(const AbstractProductA &collaborator) const override {
        const std::string result = collaborator.UsefulFunctionA();
        return "The result of the B1 collaborating with ( " + result + " )";
    }
};


#endif //ABSTRACT_FACTORY_SOLIDPRODUCTB1_H

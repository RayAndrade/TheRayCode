//
// Created by ray on 12/8/21.
//

#ifndef UNTITLED_PRODUCTB2_H
#define UNTITLED_PRODUCTB2_H
#include "AbstractProductB.h"

class ProductB2 : public AbstractProductB {
public:
    std::string UsefulFunction2() const override {
        return "The result of Product B2.";
    }
    std::string AnotherUsefulFunctionB(const AbstractProductA &collaborator) const override {
        const std::string result = collaborator.UsefulFunctionA();
        return "The result of B2 collaborating with ( " + result + " )";
    }
};
#endif //UNTITLED_PRODUCTB2_H

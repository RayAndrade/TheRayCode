//
// Created by ray on 7/15/21.
//

#ifndef ABSTRACTFACTORY_PRODUCTA1_H
#define ABSTRACTFACTORY_PRODUCTA1_H
#include "AbstractProductA.h"
class ProductA1 : public AbstractProductA {
public:
    std::string UsefulFunctionA() const override {
        return "The result of Product A1.";
    }
};
#endif //ABSTRACTFACTORY_PRODUCTA1_H

//
// Created by ray on 7/16/21.
//

#ifndef ABSTRACTFACTORY_PRODUCTA2_H
#define ABSTRACTFACTORY_PRODUCTA2_H

#include "AbstractProductA.h"

class ProductA2 : public AbstractProductA {
    std::string UsefulFunctionA() const override {
        return "The result of Product A2.";
    }
};
#endif //ABSTRACTFACTORY_PRODUCTA2_H

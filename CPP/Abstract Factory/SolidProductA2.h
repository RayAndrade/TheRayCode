//
// Created by ray on 7/31/20.
//

#ifndef ABSTRACT_FACTORY_SOLIDPRODUCTA2_H
#define ABSTRACT_FACTORY_SOLIDPRODUCTA2_H

#include "AbstractProductA.h"

class SolidProductA2 : public AbstractProductA {
    std::string UsefulFunctionA() const override {
        return "The result of the product A2.";
    }
};


#endif //ABSTRACT_FACTORY_SOLIDPRODUCTA2_H

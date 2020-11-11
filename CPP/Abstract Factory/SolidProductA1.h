//
// Created by ray on 7/31/20.
//

#ifndef ABSTRACT_FACTORY_SOLIDPRODUCTA1_H
#define ABSTRACT_FACTORY_SOLIDPRODUCTA1_H

#include "AbstractProductA.h"


class SolidProductA1 : public AbstractProductA {
public:
    std::string UsefulFunctionA() const override {
        return "The result of the product A1.";
    }
};


#endif //ABSTRACT_FACTORY_SOLIDPRODUCTA1_H

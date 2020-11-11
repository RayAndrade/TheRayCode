//
// Created by ray on 8/1/20.
//

#ifndef ABSTRACT_FACTORY_SOLIDFACTORY2_H
#define ABSTRACT_FACTORY_SOLIDFACTORY2_H

#include "AbstractFactory.h"
#include "SolidProductA2.h"
#include "SolidProductB2.h"

class SolidFactory2 : public AbstractFactory {
public:
    AbstractProductA *CreateProductA() const override {
        return new SolidProductA2();
    }
    AbstractProductB *CreateProductB() const override {
        return new SolidProductB2();
    }
};


#endif //ABSTRACT_FACTORY_SOLIDFACTORY2_H

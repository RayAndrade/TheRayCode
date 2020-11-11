//
// Created by ray on 7/31/20.
//

#ifndef ABSTRACT_FACTORY_SOLIDFACTORY1_H
#define ABSTRACT_FACTORY_SOLIDFACTORY1_H

#include "AbstractFactory.h"
#include "SolidProductA1.h"
#include "SolidProductB1.h"

class SolidFactory1 : public AbstractFactory {
public:
    AbstractProductA *CreateProductA() const override {
        return new SolidProductA1();
    }
    AbstractProductB *CreateProductB() const override {
        return new SolidProductB1();
    }
};

#endif //ABSTRACT_FACTORY_SOLIDFACTORY1_H

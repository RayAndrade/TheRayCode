//
// Created by ray on 8/1/20.
//

#ifndef ABSTRACT_FACTORY_ABSTRACTFACTORY_H
#define ABSTRACT_FACTORY_ABSTRACTFACTORY_H
#include "AbstractProductA.h"
#include "AbstractProductB.h"

class AbstractFactory {
public:
    virtual AbstractProductA *CreateProductA() const = 0;
    virtual AbstractProductB *CreateProductB() const = 0;
};


#endif //ABSTRACT_FACTORY_ABSTRACTFACTORY_H

//
// Created by The Ray Code on 12/22/21.
//

#ifndef SHOW_ABSTRACTFACTORY_H
#define SHOW_ABSTRACTFACTORY_H

//#include "AbstractProductA.h"
#include "AbstractProductB.h"

class AbstractFactory {
public:
    virtual AbstractProductA *CreateProductA() const = 0;
    virtual AbstractProductB *CreateProductB() const = 0;
};

#endif //SHOW_ABSTRACTFACTORY_H

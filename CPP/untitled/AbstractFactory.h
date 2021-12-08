//
// Created by ray on 12/8/21.
//

#ifndef UNTITLED_ABSTRACTFACTORY_H
#define UNTITLED_ABSTRACTFACTORY_H
//#include "AbstractProductA.h"
#include "AbstractProductB.h"

class AbstractFactory {
public:
    virtual AbstractProductA *CreateProductA() const = 0;
    virtual AbstractProductB *CreateProductB() const = 0;
};
#endif //UNTITLED_ABSTRACTFACTORY_H

//
// Created by ray on 9/11/21.
//

#ifndef ABSTRACTFACTORY_CONCRETEFACTORY2_H
#define ABSTRACTFACTORY_CONCRETEFACTORY2_H
#include "SystemManagementFactory.h"

class ConcreteFactory2 : public SystemManagementFactory{
public:
    ConfigurationManager *CreateProductA() const override {
        return new UnisysConfiguration();
    }
    OperationManager *CreateProductB() const override {
        return new UnisysOperation();
    }
};
#endif //ABSTRACTFACTORY_CONCRETEFACTORY2_H

//
// Created by ray on 9/11/21.
//

#ifndef ABSTRACTFACTORY_CONCRETEFACTORY1_H
#define ABSTRACTFACTORY_CONCRETEFACTORY1_H

#include "SystemManagementFactory.h"
class ConcreteFactory1 : public SystemManagementFactory {
public:
    ConfigurationManager *CreateProductA() const override {
        return new IBMConfiguration();
    }
    OperationManager *CreateProductB() const override {
        return new IBMOperation();
    }
};
#endif //ABSTRACTFACTORY_CONCRETEFACTORY1_H

//
// Created by ray on 8/31/21.
//
#ifndef ABSTRACTFACTORY2_UNISYSSMFACTORY_H
#define ABSTRACTFACTORY2_UNISYSSMFACTORY_H

#include "UnisysOperationManager.h"
#include "UnisysConfigurationManager.h"


class UnisysSMFactory: public SystemManagementFactory
{
public:
    virtual ConfigurationManager* CreateConfigurationManager()
    {
        return new UnisysConfigurationManager();
    }
    virtual  OperationManager* CreateOperationManager()
    {
        return new UnisysOperationManager();
    }
};
#endif //ABSTRACTFACTORY2_UNISYSSMFACTORY_H

//
// Created by ray on 8/31/21.
//

#ifndef ABSTRACTFACTORY2_SYSTEMMANAGEMENTFACTORY_H
#define ABSTRACTFACTORY2_SYSTEMMANAGEMENTFACTORY_H
#include "ConfigurationManager.h"
#include "OperationManager.h"

class SystemManagementFactory
{
public:
    virtual UnisysOperationManager CreateConfigurationManager() = 0;
    virtual OperationManager* CreateOperationManager() = 0;
};


#endif //ABSTRACTFACTORY2_SYSTEMMANAGEMENTFACTORY_H

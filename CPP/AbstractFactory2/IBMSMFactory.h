//
// Created by ray on 8/31/21.
//

#ifndef ABSTRACTFACTORY2_IBMSMFACTORY_H
#define ABSTRACTFACTORY2_IBMSMFACTORY_H


#include "IBMOperationManager.h"
#include "IBMConfigurationManager.h"

class IBMSMFactory : public SystemManagementFactory
{
    virtual ConfigurationManager* CreateConfigurationManager()
    {
        return new IBMConfigurationManager();
    }
    virtual OperationManager* CreateOperationManager()
    {
        return new IBMOperationManager();
    }
};

#endif //ABSTRACTFACTORY2_IBMSMFACTORY_H

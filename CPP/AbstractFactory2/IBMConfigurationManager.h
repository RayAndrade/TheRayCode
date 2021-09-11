//
// Created by ray on 8/31/21.
//

#ifndef ABSTRACTFACTORY2_IBMCONFIGURATIONMANAGER_H
#define ABSTRACTFACTORY2_IBMCONFIGURATIONMANAGER_H

#include "ConfigurationManager.h"

class IBMConfigurationManager: ConfigurationManager
{
public:
    virtual void UseConfiguationManager()
    {
        std::cout << "Inside IBMConfigurationManager::UseConfigurationManager()\n";
    }
};

#endif //ABSTRACTFACTORY2_IBMCONFIGURATIONMANAGER_H

//
// Created by ray on 8/31/21.
//

#ifndef ABSTRACTFACTORY2_UNISYSCONFIGURATIONMANAGER_H
#define ABSTRACTFACTORY2_UNISYSCONFIGURATIONMANAGER_H

#include "ConfigurationManager.h"

class UnisysConfigurationManager : ConfigurationManager
{
public:
    virtual void UseConfiguationManager()
    {
        std::cout << "Inside UnisysConfigurationManager::UseConfigurationManager()\n";
    }
};

#endif //ABSTRACTFACTORY2_UNISYSCONFIGURATIONMANAGER_H

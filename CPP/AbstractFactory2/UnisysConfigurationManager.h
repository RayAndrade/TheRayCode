//
// Created by ray on 8/31/21.
//

#ifndef ABSTRACTFACTORY2_UNISYSCONGIGURATIONMANAGER_H
#define ABSTRACTFACTORY2_UNISYSCONGIGURATIONMANAGER_H

#include "ConfiguationManager.h"

class UnisysConfigurationManager : ConfigurationManager
{
public:
    virtual void UseConfiguationManager()
    {
        std::cout << "Inside UnisysConfigurationManager::UseConfigurationManager()\n"
    }
};

#endif //ABSTRACTFACTORY2_UNISYSCONGIGURATIONMANAGER_H

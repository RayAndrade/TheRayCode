//
// Created by ray on 8/31/21.
//

#ifndef ABSTRACTFACTORY2_UNISYSOPERATIONMANAGER_H
#define ABSTRACTFACTORY2_UNISYSOPERATIONMANAGER_H

#include "OperationManager.h"

class UnisysOperationManager : public OperationManager
{
public:
    virtual void  UseOperationManager()
    {
        std::cout << "Inside UnisysOperationManager::UseOperationManager()\n";
    }
};

#endif //ABSTRACTFACTORY2_UNISYSOPERATIONMANAGER_H

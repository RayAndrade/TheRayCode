//
// Created by ray on 8/31/21.
//

#ifndef ABSTRACTFACTORY2_IBMOPERATIONMANAGER_H
#define ABSTRACTFACTORY2_IBMOPERATIONMANAGER_H
#include "OperationManager.h"

class IBMOperationManager : public OperationManager
{
public:
    virtual void UseOperationManager()
    {
        std::cout << "Inside IBMOperationManager::UseOperationManager()\n"
    }
};
#endif //ABSTRACTFACTORY2_IBMOPERATIONMANAGER_H

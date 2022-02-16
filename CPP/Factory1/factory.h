//
// Created by ray on 2/16/22.
//

#ifndef FACTORY1_FACTORY_H
#define FACTORY1_FACTORY_H
#include "vehicle.h"

class Factory
{
public:

    static Vehicle* createInstance(int i);
    static int destroyInstance(Vehicle*);
};



#endif //FACTORY1_FACTORY_H

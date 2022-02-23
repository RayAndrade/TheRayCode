//
// Created by ray on 2/22/22.
//

#ifndef FACTORY2_FACTORY_H
#define FACTORY2_FACTORY_H
#include "vehicle.h"

class Factory
{
public:

    static Vehicle* createInstance(int i);
    static int destroyInstance(Vehicle*);
};
#endif //FACTORY2_FACTORY_H

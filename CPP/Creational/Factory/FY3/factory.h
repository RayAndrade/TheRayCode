//
// Created by ray on 7/4/22.
//

#ifndef FY2_FACTORY_H
#define FY2_FACTORY_H

#include "vehicle.h"
class Factory
{
public:

    static Vehicle* createInstance(int i);
    static int destroyInstance(Vehicle*);
};
#endif //FY2_FACTORY_H

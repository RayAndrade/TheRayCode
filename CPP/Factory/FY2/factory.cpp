//
// Created by ray on 7/4/22.
//

#include "vehicle.h"
#include "factory.h"

Vehicle* Factory::createInstance(int vtype)
{
    if (CIVIL_CAR == vtype)
    {
        return new CivilCar;
    }
    else if (MOTORCYCLE == vtype)
    {
        return new Motorcycle;
    }
    else
        return nullptr;
}

int Factory::destroyInstance(Vehicle* p)
{
    if (p)
    {
        delete p;
        p = nullptr;
        return 0;
    }
    else
        return -1;
}
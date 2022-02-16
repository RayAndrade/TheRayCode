//
// Created by ray on 2/16/22.
//

#ifndef FACTORY1_CIVILCAR_H
#define FACTORY1_CIVILCAR_H

#include "Vehicle.h"
#include "Factory.h"

class CivilCar : public Vehicle
{
    friend class Factory;
protected:
    CivilCar();
    virtual ~CivilCar();

public:

    virtual void doRun();
};


#endif //FACTORY1_CIVILCAR_H

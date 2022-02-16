//
// Created by ray on 2/16/22.
//

#ifndef FACTORY1_VEHICLE_PARTS_H
#define FACTORY1_VEHICLE_PARTS_H

class VehicleParts
{

public:
    VehicleParts(){}
    virtual ~VehicleParts(){}

    virtual void wheels() = 0;
    virtual void engine() = 0;

};


class CivilCarParts : public VehicleParts
{
public:
    CivilCarParts(){}
    virtual ~CivilCarParts(){}

    virtual void wheels();
    virtual void engine();
};

class MotorcycleParts : public VehicleParts
{
public:
    MotorcycleParts(){}
    virtual ~MotorcycleParts(){}

    virtual void wheels();
    virtual void engine();
};

#endif //FACTORY1_VEHICLE_PARTS_H

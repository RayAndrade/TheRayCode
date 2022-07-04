//
// Created by ray on 7/4/22.
//

#include "vehicle.h"

#include <iostream>

using std::cout;
using std::endl;

Vehicle::Vehicle()
{

}

Vehicle::~Vehicle()
{

}

//----------------------------------------------

CivilCar::CivilCar()
{
    cout << "CivilCar CTOR called" << endl;
}

CivilCar::~CivilCar()
{
    cout << "CivilCar DTOR called" << endl;
}

void CivilCar::doRun()
{
    cout << "CivilCar is starting slowly" << endl;
}

//----------------------------------------------

Motorcycle::Motorcycle()
{
    cout << "Motorcycle CTOR is called" << endl;
}

Motorcycle::~Motorcycle()
{
    cout << "Motorcycle DTOR is called" << endl;
}

void Motorcycle::doRun()
{
    cout << "Motorcycle goes on full and scares everyone" << endl;
}
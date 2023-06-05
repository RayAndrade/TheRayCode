//
// Created by ray on 6/5/23.
//

#ifndef SHOW_CARBUILDER_H
#define SHOW_CARBUILDER_H

#include "Car.h"

class CarBuilder {
public:
    virtual ~CarBuilder() {}
    virtual void setEngine(std::string type) = 0;
    virtual void setSeats(std::string type) = 0;
    virtual void setWheels(std::string type) = 0;
    virtual Car* getCar() = 0;
};

#endif //SHOW_CARBUILDER_H

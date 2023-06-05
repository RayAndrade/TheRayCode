//
// Created by ray on 6/5/23.
//

#ifndef SHOW_SPORTSCARBUILDER_H
#define SHOW_SPORTSCARBUILDER_H

#include "CarBuilder.h"

class SportsCarBuilder : public CarBuilder{
private:
    Car *car;
public:
    SportsCarBuilder() { this->car = new Car(); }
    ~SportsCarBuilder() { delete car; }

    void setEngine(std::string type) override { car->Engine = type + " sports engine"; }
    void setSeats(std::string type) override { car->Seats = type + " sports seats"; }
    void setWheels(std::string type) override { car->Wheels = type + " sports wheels"; }
    Car* getCar() override { return car; }
};

#endif //SHOW_SPORTSCARBUILDER_H

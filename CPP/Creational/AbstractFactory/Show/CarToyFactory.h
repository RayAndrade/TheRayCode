//
// Created by ray on 4/26/23.
//

#ifndef SHOW_CARTOYFACTORY_H
#define SHOW_CARTOYFACTORY_H

#include <iostream>
#include "ToyFactory.h"
#include "CarToy.h"

class CarToyFactory : public ToyFactory{
public:
    Toy* createToy() override {
        std::cout << "CarToyFactory :ToyFactory" << std::endl;
        return new CarToy();
    }
};

#endif //SHOW_CARTOYFACTORY_H

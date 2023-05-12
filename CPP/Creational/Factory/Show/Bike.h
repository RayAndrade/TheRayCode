//
// Created by ray on 5/11/23.
//

#ifndef FACTORY_BIKE_H
#define FACTORY_BIKE_H

#include "Toy.h"

class  Bike  : public Toy{
    void prepareParts() { std::cout<< "Preparing Bike Parts" <<std::endl; };
    void combineParts() { std::cout<< "combining Bike Parts" <<std::endl; };
    void assembleParts() { std::cout<< "Assembling Bike Parts" <<std::endl; };
    void applyLabel()  { std::cout<< "Preparing Bike Label " <<std::endl; name = "Applying Bike Label"; price = 10; };
    void showProduct() { std::cout<< "Preparing Bike Parts" <<std::endl; };
};

#endif //FACTORY_BIKE_H

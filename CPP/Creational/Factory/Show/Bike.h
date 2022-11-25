//
// Created by ray on 11/24/22.
//

#ifndef SHOW_BIKE_H
#define SHOW_BIKE_H

#include "Toy.h"

class Bike : public Toy{

public:
    void prepareParts() { std::cout<< "Preparing Bike Parts" <<std::endl; };
    void combineParts() { std::cout<< "combining Bike Parts" <<std::endl; };
    void assembleParts() { std::cout<< "Assembling Bike Parts" <<std::endl; };
    void applyLabel()  { std::cout<< "Preparing Bike Label " <<std::endl; name = "Applying Bike Label"; price = 10; };
    void showProduct() { std::cout<< "Preparing Bike Parts" <<std::endl; };

};

#endif //SHOW_BIKE_H

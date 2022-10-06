//
// Created by ray on 10/6/22.
//

#ifndef FY1_BIKE_H
#define FY1_BIKE_H

#include "Toy.h";

class Bike : public Toy{
    // make all constructor privater or protected

public:
    void prepareParts() { std::cout<< "Preparing Bike Parts" <<std::endl; };
    void combineParts() { std::cout<< "combining Bike Parts" <<std::endl; };
    void assembleParts() { std::cout<< "Assembling Bike Parts" <<std::endl; };
    void applyLabel()  { std::cout<< "Preparing Bike Label " <<std::endl; name = "Applying Bike Label"; price = 10; };
    void showProduct() { std::cout<< "Preparing Bike Parts" <<std::endl; };

};


#endif //FY1_BIKE_H

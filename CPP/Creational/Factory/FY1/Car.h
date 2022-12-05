//
// Created by ray on 12/5/22.
//

#ifndef FACTORY_CAR_H
#define FACTORY_CAR_H

#include "Toy.h"

class Car : public Toy{
public:
    void prepareParts() { std::cout<< "Preparing Car Parts" <<std::endl; };
    void combineParts() { std::cout<< "combining Car Parts" <<std::endl; };
    void assembleParts() { std::cout<< "Assembling Car Parts" <<std::endl; };
    void applyLabel()  { std::cout<< "Preparing Car Label " <<std::endl; name = "Applying Car Label"; price = 10; };
    void showProduct() { std::cout<< "Preparing Car Parts" <<std::endl; };
};

#endif //FACTORY_CAR_H

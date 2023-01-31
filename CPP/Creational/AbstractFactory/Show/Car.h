//
// Created by ray on 12/12/22.
//

#ifndef SHOW_CAR_H
#define SHOW_CAR_H

#include "Toy.h"

class Car : public Toy{
public:
    void prepareParts() { std::cout<< "Preparing Car Parts" <<std::endl; };
    void combineParts() { std::cout<< "combining Car Parts" <<std::endl; };
    void assembleParts() { std::cout<< "Assembling Car Parts" <<std::endl; };
    void applyLabel()  { std::cout<< "Preparing Car Label " <<std::endl; name = "Applying Car Label"; price = 10; };
    void showProduct() { std::cout<< "Preparing Car Parts" <<std::endl; };
};

#endif //SHOW_CAR_H

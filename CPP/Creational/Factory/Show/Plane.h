//
// Created by ray on 12/5/22.
//

#ifndef FACTORY_PLANE_H
#define FACTORY_PLANE_H

#include "Toy.h"

class Plane : public Toy{

public:
    void prepareParts() { std::cout<< "Preparing Plane Parts" <<std::endl; };
    void combineParts() { std::cout<< "combining Plane Parts" <<std::endl; };
    void assembleParts() { std::cout<< "Assembling Plane Parts" <<std::endl; };
    void applyLabel()  { std::cout<< "Preparing Plane Label " <<std::endl; name = "Applying Plane Label"; price = 10; };
    void showProduct() { std::cout<< "Preparing Plane Parts" <<std::endl; };
};

#endif //FACTORY_PLANE_H

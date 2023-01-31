//
// Created by ray on 12/12/22.
//

#ifndef SHOW_PLANE_H
#define SHOW_PLANE_H

#include "Toy.h"

class Plane : public Toy{

public:
    void prepareParts() { std::cout<< "Preparing Plane Parts" <<std::endl; };
    void combineParts() { std::cout<< "combining Plane Parts" <<std::endl; };
    void assembleParts() { std::cout<< "Assembling Plane Parts" <<std::endl; };
    void applyLabel()  { std::cout<< "Preparing Plane Label " <<std::endl; name = "Applying Plane Label"; price = 10; };
    void showProduct() { std::cout<< "Preparing Plane Parts" <<std::endl; };
};

#endif //SHOW_PLANE_H

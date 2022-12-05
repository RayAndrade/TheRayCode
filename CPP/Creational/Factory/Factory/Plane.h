//
// Created by ray on 10/6/22.
//

#ifndef FY1_PLANE_H
#define FY1_PLANE_H

#include "Toy.h";

class Plane : public Toy{
    // make all constructor privater or protected

public:
    void prepareParts() { std::cout<< "Preparing Plane Parts" <<std::endl; };
    void combineParts() { std::cout<< "combining Plane Parts" <<std::endl; };
    void assembleParts() { std::cout<< "Assembling Plane Parts" <<std::endl; };
    void applyLabel()  { std::cout<< "Preparing Plane Label " <<std::endl; name = "Applying Plane Label"; price = 10; };
    void showProduct() { std::cout<< "Preparing Plane Parts" <<std::endl; };
};


#endif //FY1_PLANE_H

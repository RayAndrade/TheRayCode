//
// Created by ray on 10/17/22.
//

#ifndef FY1_TOYFACTORY_H
#define FY1_TOYFACTORY_H
//
// Created by ray on 7/4/22.
//

#include "Toys.cpp"

class ToyFactory{
public:
    static Toy * createToy(int type){
        Toy *toy = NULL;

        switch(type){
            case 1:{
                toy = new Car;
                break;
            }
            case 2:{
                toy = new Bike;
                break;
            }
            case 3:{
                toy = new Plane;
                break;
            }
            default:{
                std::cout << "Invalid toy type please re-enter type" << std::endl;
                return NULL;
            }
        }
        toy->prepareParts();
        toy->combineParts();
        toy->assembleParts();
        toy->applyLabel();
        return toy;
    }
};
#endif //FY1_TOYFACTORY_H

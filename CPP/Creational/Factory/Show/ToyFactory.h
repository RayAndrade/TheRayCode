//
// Created by ray on 10/29/22.
//

#ifndef SHOW_TOYFACTORY_H
#define SHOW_TOYFACTORY_H
#include "SantasBag.h"

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
#endif //SHOW_TOYFACTORY_H

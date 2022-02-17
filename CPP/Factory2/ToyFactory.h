//
// Created by ray on 2/16/22.
//

#ifndef FACTORY2_TOYFACTORY_H
#define FACTORY2_TOYFACTORY_H

#include <iostream>
using namespace std;

#include "Object.cpp"

class ToyFactory {
public:
    static Toy * createToy(int type){
        Toy *toy = NULL;
        switch(type){
            case 1:
                toy = new Car;
        }

    }
};


#endif //FACTORY2_TOYFACTORY_H

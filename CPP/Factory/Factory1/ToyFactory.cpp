//
// Created by ray on 2/19/22.
//
#include <iostream>
using namespace std;

#include "Object.cpp"

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
        }
        case 3:{
            toy = new Plane;
            break;
        }
        default:{
            cout << "Invalid toy type please re-enter type" << endl;
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


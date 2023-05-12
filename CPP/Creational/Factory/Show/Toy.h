//
// Created by ray on 5/11/23.
//

#ifndef FACTORY_TOY_H
#define FACTORY_TOY_H

#include <iostream>

class Toy{
protected:
    std::string name;
    float price;
public:
    virtual void prepareParts()  = 0;
    virtual void combineParts()  = 0;
    virtual void assembleParts() = 0;
    virtual void applyLabel()    = 0;
    virtual void showProduct()   = 0;
};


#endif //FACTORY_TOY_H

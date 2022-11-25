//
// Created by ray on 11/24/22.
//

#ifndef SHOW_TOY_H
#define SHOW_TOY_H

#include <iostream>

class Toy {
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

#endif //SHOW_TOY_H

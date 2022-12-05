//
// Created by ray on 10/6/22.
//

#ifndef FY1_TOY_H
#define FY1_TOY_H

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


#endif //FY1_TOY_H

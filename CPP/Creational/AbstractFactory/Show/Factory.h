//
// Created by ray on 2/28/23.
//

#ifndef SHOW_FACTORY_H
#define SHOW_FACTORY_H

#include "Product.h"


// Abstract factory class
class Factory {
public:
    virtual ~Factory() {}
    virtual Product* createProduct() = 0;
};

#endif //SHOW_FACTORY_H

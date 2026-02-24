//
// Created by ray on 2/23/25.
//

#ifndef CODE_CREATOR_H
#define CODE_CREATOR_H

#include "Product.h"

class Creator {
public:
    virtual Product* factoryMethod() = 0;
    virtual ~Creator() {}
};
#endif //CODE_CREATOR_H

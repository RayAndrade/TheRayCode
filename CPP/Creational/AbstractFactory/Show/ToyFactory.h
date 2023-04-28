//
// Created by ray on 4/26/23.
//

#ifndef SHOW_TOYFACTORY_H
#define SHOW_TOYFACTORY_H

#include "Toy.h"

class ToyFactory {
public:
    virtual ~ToyFactory() {}
    virtual Toy* createToy() = 0;
};

#endif //SHOW_TOYFACTORY_H

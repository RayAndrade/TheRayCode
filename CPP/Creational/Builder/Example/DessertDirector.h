//
// Created by ray on 11/10/23.
//

#ifndef DESSERTDIRECTOR_H
#define DESSERTDIRECTOR_H

#include "DessertBuilder.h"

class DessertDirector {
public:
    void construct(DessertBuilder& builder) {
        builder.createNewDessertProduct();
        builder.buildBase();
        builder.buildFilling();
        builder.buildToppings();
    }
};

#endif //DESSERTDIRECTOR_H

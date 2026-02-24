//
// Created by ray on 11/10/23.
//

#ifndef BEGINNING_SANDWICHDIRECTOR_H
#define BEGINNING_SANDWICHDIRECTOR_H

#include "SandwichBuilder.h"

class SandwichDirector {
public:
    void construct(SandwichBuilder& builder) {
        builder.createNewSandwichProduct();
        builder.buildBread();
        builder.buildMeat();
        builder.buildCheese();
        builder.buildVegetables();
        builder.buildCondiments();
    }
};


#endif //BEGINNING_SANDWICHDIRECTOR_H

//
// Created by ray on 11/9/23.
//

#ifndef BEGINNING_SANDWICHDIRECTOR_H
#define BEGINNING_SANDWICHDIRECTOR_H


#include "SandwichBuilder.h"

// Director class that constructs a sandwich using the Builder interface.
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

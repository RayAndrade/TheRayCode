//
// Created by ray on 11/10/23.
//

#ifndef BEGINNING_SANDWICHBUILDER_H
#define BEGINNING_SANDWICHBUILDER_H

#include "Sandwich.h"

class SandwichBuilder {
protected:
    Sandwich* sandwich;

public:
    SandwichBuilder() : sandwich(nullptr) {}

    virtual ~SandwichBuilder() {
        delete sandwich;
    }
    Sandwich* getSandwich() {
        return sandwich;
    }

    void createNewSandwichProduct() {
        sandwich = new Sandwich();
    }
    virtual void buildBread() = 0;
    virtual void buildMeat() = 0;
    virtual void buildCheese() = 0;
    virtual void buildVegetables() = 0;
    virtual void buildCondiments() = 0;
};


#endif //BEGINNING_SANDWICHBUILDER_H

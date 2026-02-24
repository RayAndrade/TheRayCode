//
// Created by ray on 11/10/23.
//

#ifndef BEGINNING_CLUBSANDWICHBUILDER_H
#define BEGINNING_CLUBSANDWICHBUILDER_H

#include "SandwichBuilder.h"
class ClubSandwichBuilder : public SandwichBuilder{
public:
    virtual ~ClubSandwichBuilder() {}

    void buildBread() override {
        sandwich->setBread("toasted");
    }

    void buildMeat() override {
        sandwich->setMeat("turkey");
    }

    void buildCheese() override {
        sandwich->setCheese("Swiss");
    }

    void buildVegetables() override {
        sandwich->addVegetable("lettuce");
        sandwich->addVegetable("tomato");
    }

    void buildCondiments() override {
        sandwich->addCondiment("mayonnaise");
    }
};



#endif //BEGINNING_CLUBSANDWICHBUILDER_H

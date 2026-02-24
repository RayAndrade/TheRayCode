//
// Created by ray on 11/9/23.
//

#ifndef BEGINNING_HAWAIIANPIZZABUILDER_H
#define BEGINNING_HAWAIIANPIZZABUILDER_H


#include "PizzaBuilder.h"

// Concrete Builder for Hawaiian pizza.
class HawaiianPizzaBuilder : public PizzaBuilder {
public:
    virtual ~HawaiianPizzaBuilder() {}

    void buildDough() override {
        pizza->setDough("cross");
    }

    void buildSauce() override {
        pizza->setSauce("mild");
    }

    void buildTopping() override {
        pizza->addTopping("ham");
        pizza->addTopping("pineapple");
    }
};

#endif //BEGINNING_HAWAIIANPIZZABUILDER_H

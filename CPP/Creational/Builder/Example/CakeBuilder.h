//
// Created by ray on 11/10/23.
//

#ifndef CAKEBUILDER_H
#define CAKEBUILDER_H

#include "DessertBuilder.h"

class CakeBuilder : public DessertBuilder {
public:
    virtual ~CakeBuilder() {}

    void buildBase() override {
        dessert->setBase("sponge cake");
    }

    void buildFilling() override {
        dessert->setFilling("vanilla cream");
    }

    void buildToppings() override {
        dessert->addTopping("chocolate shavings");
        dessert->addTopping("strawberries");
    }
};

#endif //CAKEBUILDER_H

//
// Created by ray on 11/10/23.
//

#ifndef DESSERTBUILDER_H
#define DESSERTBUILDER_H

#include "Dessert.h"

class DessertBuilder {
protected:
    Dessert* dessert;
public:
    DessertBuilder() : dessert(nullptr) {}

    virtual ~DessertBuilder() {
        delete dessert;
    }

    Dessert* getDessert() {
        return dessert;
    }

    void createNewDessertProduct() {
        dessert = new Dessert();
    }

    virtual void buildBase() = 0;
    virtual void buildFilling() = 0;
    virtual void buildToppings() = 0;
};

#endif //DESSERTBUILDER_H

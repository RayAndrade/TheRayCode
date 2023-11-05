//
// Created by ray on 11/4/23.
//

#ifndef BEGINNING_PIZZADIRECTOR_H
#define BEGINNING_PIZZADIRECTOR_H

#include "Pizza.h"

// Abstract Builder
class PizzaBuilder {
protected:
    Pizza* pizza;
public:
    PizzaBuilder() : pizza(nullptr) {}

    virtual ~PizzaBuilder() {}

    Pizza* getPizza() {
        return pizza;
    }

    void createNewPizzaProduct() {
        pizza = new Pizza();
    }

    virtual void buildDough() = 0;
    virtual void buildSauce() = 0;
    virtual void buildTopping() = 0;
};

#endif //BEGINNING_PIZZADIRECTOR_H

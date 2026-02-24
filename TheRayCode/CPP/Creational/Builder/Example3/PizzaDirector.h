//
// Created by ray on 11/9/23.
//

#ifndef BEGINNING_PIZZADIRECTOR_H
#define BEGINNING_PIZZADIRECTOR_H


#include "PizzaBuilder.h"

// Director class that constructs an object using the Builder interface.
class PizzaDirector {
public:
    void construct(PizzaBuilder& builder) {
        builder.createNewPizzaProduct();
        builder.buildDough();
        builder.buildSauce();
        builder.buildTopping();
    }
};

#endif //BEGINNING_PIZZADIRECTOR_H

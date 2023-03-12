//
// Created by ray on 2/28/23.
//

#ifndef SHOW_CONCRETEFACTORY1_H
#define SHOW_CONCRETEFACTORY1_H
#include "Factory.h"

// Concrete factory class 1
class ConcreteFactory1 : public Factory {
public:
    Product* createProduct() override {
        return new ConcreteProduct1();
    }
};

#endif //SHOW_CONCRETEFACTORY1_H

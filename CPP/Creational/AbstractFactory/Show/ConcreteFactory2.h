//
// Created by ray on 2/28/23.
//

#ifndef SHOW_CONCRETEFACTORY2_H
#define SHOW_CONCRETEFACTORY2_H
#include "Factory.h"

// Concrete factory class 2
class ConcreteFactory2 : public Factory {
public:
    Product* createProduct() override {
        return new ConcreteProduct2();
    }
};
#endif //SHOW_CONCRETEFACTORY2_H

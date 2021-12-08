//
// Created by ray on 12/8/21.
//

#ifndef SHOW_CREATORA_H
#define SHOW_CREATORA_H
#include "Creator.h"
#include "ProductA.h"

class CreatorA : public Creator {

public:
    Product* FactoryMethod() const override {
        return new ProductA();
    }
};

#endif //SHOW_CREATORA_H

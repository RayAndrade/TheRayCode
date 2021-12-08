//
// Created by ray on 12/7/21.
//

#ifndef FACTORY_CREATORA_H
#define FACTORY_CREATORA_H
#include "Creator.h"
#include "ProductA.h"

class CreatorA : public Creator {

public:
    Product* FactoryMethod() const override {
        return new ProductA();
    }
};
#endif //FACTORY_CREATORA_H

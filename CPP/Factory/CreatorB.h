//
// Created by ray on 12/7/21.
//

#ifndef FACTORY_CREATORB_H
#define FACTORY_CREATORB_H
#include "Creator.h"
#include "ProductB.h"

class CreatorB : public Creator {

public:
    Product* FactoryMethod() const override {
        return new ProductB();
    }
};
#endif //FACTORY_CREATORB_H

//
// Created by ray on 3/15/22.
//

#ifndef SHOW_CREATORB_H
#define SHOW_CREATORB_H

#include "ProductB.h"
#include "Creator.h"

class CreatorB : public Creator{
    Product* FactoryMethod() const override {
        return new ProductB();
    }
};

#endif //SHOW_CREATORB_H

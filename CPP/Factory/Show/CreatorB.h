//
// Created by ray on 3/15/22.
//

#ifndef SHOW_CREATORB_H
#define SHOW_CREATORB_H

#include "Creator.h"
#include "ProductB.h"

class CreatorB : public Creator {

public:
    Product* FactoryMethod() const override {
        return new ProductB();
    }
};
#endif //SHOW_CREATORB_H

//
// Created by ray on 12/7/21.
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

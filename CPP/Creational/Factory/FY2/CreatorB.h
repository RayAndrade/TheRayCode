//
// Created by ray on 7/4/22.
//

#ifndef F3_CREATORB_H
#define F3_CREATORB_H

#include "Creator.h"
#include "ProductB.h"

class CreatorB : public Creator {

public:
    Product* FactoryMethod() const override {
        return new ProductB();
    }
};

#endif //F3_CREATORB_H

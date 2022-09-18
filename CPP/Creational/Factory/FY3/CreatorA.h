//
// Created by ray on 7/4/22.
//

#ifndef F3_CREATORA_H
#define F3_CREATORA_H

#include "Creator.h"
#include "ProductA.h"

class CreatorA : public Creator {

public:
    Product* FactoryMethod() const override {
        return new ProductA();
    }
};

#endif //F3_CREATORA_H

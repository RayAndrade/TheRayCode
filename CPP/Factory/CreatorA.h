#ifndef FACTORY_CREATORA_H
#define FACTORY_CREATORA_H

/**
 * Concrete Creators override the factory method in order to change the
 * resulting product's type.
 */

#include "Creator.h"
#include "ProductA.h"

class CreatorA : public Creator {

public:
    Product* FactoryMethod() const override {
        return new ProductA();
    }
};

#endif //FACTORY_CREATORA_H

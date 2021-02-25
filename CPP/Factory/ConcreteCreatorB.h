#ifndef FACTORY_CONCRETECREATORB_H
#define FACTORY_CONCRETECREATORB_H

#include "Creator.h"
#include "ConcreteProductB.h"

class ConcreteCreatorB : public Creator {
public:
    Product* FactoryMethod() const override {
        return new ConcreteProductB();
    }
};

#endif //FACTORY_CONCRETECREATORB_H

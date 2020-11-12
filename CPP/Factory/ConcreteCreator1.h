#ifndef FACTORY_CONCRETECREATOR1_H
#define FACTORY_CONCRETECREATOR1_H

#include "Creator.h"
#include "ConcreteProduct1.h"

class ConcreteCreator1 : public Creator {
public:
    Product* FactoryMethod() const override {
        return new ConcreteProduct1();
    }
};


#endif //FACTORY_CONCRETECREATOR1_H

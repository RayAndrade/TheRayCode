//
// Created by ray on 2/23/25.
//

#ifndef CODE_CONCRETECREATOR_H
#define CODE_CONCRETECREATOR_H

#include "Creator.h"
#include "ConcreteProduct.h"

class ConcreteCreatorA : public Creator {
public:
    Product* factoryMethod() override;
};

class ConcreteCreatorB : public Creator {
public:
    Product* factoryMethod() override;
};
#endif //CODE_CONCRETECREATOR_H

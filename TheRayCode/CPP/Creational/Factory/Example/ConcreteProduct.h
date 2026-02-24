//
// Created by ray on 2/23/25.
//

#ifndef CODE_CONCRETEPRODUCT_H
#define CODE_CONCRETEPRODUCT_H

#include "Product.h"

class ConcreteProductA: public Product  {
public:
    void use() override;
};

class ConcreteProductB : public Product {
public:
    void use() override;
};
#endif //CODE_CONCRETEPRODUCT_H

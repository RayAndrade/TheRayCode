//
// Created by ray on 2/28/23.
//

#ifndef SHOW_CONCRETEPRODUCT1_H
#define SHOW_CONCRETEPRODUCT1_H

#include "Product.h"


// Concrete product class 1
class ConcreteProduct1 : public Product {
public:
    std::string getName() override {
        return "Concrete Product 1";
    }
};


#endif //SHOW_CONCRETEPRODUCT1_H

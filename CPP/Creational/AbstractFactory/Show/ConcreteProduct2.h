//
// Created by ray on 2/28/23.
//

#ifndef SHOW_CONCRETEPRODUCT2_H
#define SHOW_CONCRETEPRODUCT2_H

#include "Product.h"


// Concrete product class 2
class ConcreteProduct2 : public Product {
public:
    std::string getName() override {
        return "Concrete Product 2";
    }
};


#endif //SHOW_CONCRETEPRODUCT2_H

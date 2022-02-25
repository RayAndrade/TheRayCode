//
// Created by ray on 2/24/22.
//

#ifndef SHOW_CREATOR_H
#define SHOW_CREATOR_H

#include "Product.h"

class Creator {
public:
    virtual ~Creator() {};
    virtual Product *FactoryMethod() const = 0;
    std::string SomeOperation() const {
        Product *product = this->FactoryMethod();
        std::string result = "Creator: The same creator's code has just worked with " + product->Operation();
        delete product;
        return result;
    }
};

#endif //SHOW_CREATOR_H

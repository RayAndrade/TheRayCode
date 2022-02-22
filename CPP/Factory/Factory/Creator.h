//
// Created by ray on 1/9/22.
//

#ifndef FACTORY_CREATOR_H
#define FACTORY_CREATOR_H

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

#endif //FACTORY_CREATOR_H

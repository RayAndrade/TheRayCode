//
// Created by ray on 7/4/22.
//

#ifndef F3_CREATOR_H
#define F3_CREATOR_H

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


#endif //F3_CREATOR_H

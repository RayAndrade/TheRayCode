#ifndef ABSTRACTFACTORY_PRODUCT2A_H
#define ABSTRACTFACTORY_PRODUCT2A_H

#include "Product1.h"

class Product2a : public Product1 {
    std::string UsefulFunctionA() const override {
        return "The result of product 2a.";
    }
};


#endif //ABSTRACTFACTORY_PRODUCT2A_H

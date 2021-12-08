//
// Created by ray on 12/7/21.
//

#ifndef FACTORY_PRODUCTB_H
#define FACTORY_PRODUCTB_H
#include "Product.h"

class ProductB : public Product {
public:
    std::string Operation() const override {
        return "{Result of ProductB}";
    }
};
#endif //FACTORY_PRODUCTB_H

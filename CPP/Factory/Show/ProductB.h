//
// Created by ray on 3/15/22.
//

#ifndef SHOW_PRODUCTB_H
#define SHOW_PRODUCTB_H
#include "Product.h"
class ProductB:public Product {
public:
    std::string Operation() const override {
        return "{Result of ProductB}";
    }
};

#endif //SHOW_PRODUCTB_H

//
// Created by ray on 6/7/23.
//

#ifndef SHOWCPP_PRODUCTB_H
#define SHOWCPP_PRODUCTB_H
#include "Product.h"

class ProductB : public Product {
public:
    std::string GetName() override {
        return "ProductB";
    }
};

#endif //SHOWCPP_PRODUCTB_H

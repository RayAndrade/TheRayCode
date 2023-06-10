//
// Created by ray on 6/7/23.
//

#ifndef SHOWCPP_PRODUCTA_H
#define SHOWCPP_PRODUCTA_H

#include "Product.h"

class ProductA : public Product {
public:
    std::string GetName() override {
        return "ProductA";
    }
};

#endif //SHOWCPP_PRODUCTA_H

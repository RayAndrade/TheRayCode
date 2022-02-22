//
// Created by ray on 1/9/22.
//

#ifndef FACTORY_PRODUCTA_H
#define FACTORY_PRODUCTA_H

#include "Product.h"

class ProductA : public Product {
public:
    std::string Operation() const override {
        return "{Result of ProductA}";
    }
};

#endif //FACTORY_PRODUCTA_H

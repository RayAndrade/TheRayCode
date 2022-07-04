//
// Created by ray on 7/4/22.
//

#ifndef F3_PRODUCTB_H
#define F3_PRODUCTB_H

#include "Product.h"

class ProductB : public Product {
public:
    std::string Operation() const override {
        return "{Result of ProductB}";
    }
};
#endif //F3_PRODUCTB_H

//
// Created by ray on 12/7/21.
//

#ifndef SHOW_PRODUCTB_H
#define SHOW_PRODUCTB_H
#include "Product.h"

class CProductB : public Product {
public:
    std::string Operation() const override {
        return "{Result of ProductB}";
    }
};
#endif //SHOW_PRODUCTB_H

//
// Created by ray on 7/4/22.
//

#ifndef F3_PRODUCTA_H
#define F3_PRODUCTA_H

#include "Product.h"

class ProductA : public Product {
public:
    std::string Operation() const override {
        return "{Result of ProductA}";
    }
};

#endif //F3_PRODUCTA_H

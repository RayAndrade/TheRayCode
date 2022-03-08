//
// Created by ray on 3/8/22.
//

#ifndef SHOW_PRODUCTA_H
#define SHOW_PRODUCTA_H

#include "Product.h"

class ProductA : public Product{
public:
    std::string Operation() const override {
        return "{Result of ProductA}";
    }
};

#endif //SHOW_PRODUCTA_H

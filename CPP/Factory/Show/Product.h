//
// Created by ray on 3/18/22.
//

#ifndef SHOW_PRODUCT_H
#define SHOW_PRODUCT_H

#include <iostream>

class Product {
public:
    virtual ~Product() { }
    virtual std::string Operation() const = 0;
};
#endif //SHOW_PRODUCT_H

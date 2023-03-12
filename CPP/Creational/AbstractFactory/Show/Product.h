//
// Created by ray on 2/28/23.
//
#include <iostream>
#include <string>

#ifndef SHOW_PRODUCT_H
#define SHOW_PRODUCT_H

// Abstract base class for products
class Product {
public:
    virtual ~Product() {}
    virtual std::string getName() = 0;
};

#endif //SHOW_PRODUCT_H

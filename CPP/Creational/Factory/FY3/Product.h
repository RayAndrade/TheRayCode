//
// Created by ray on 7/4/22.
//

#ifndef F3_PRODUCT_H
#define F3_PRODUCT_H

#include <iostream>

class Product {
public:
    virtual ~Product() { }
    virtual std::string Operation() const = 0;
};

#endif //F3_PRODUCT_H

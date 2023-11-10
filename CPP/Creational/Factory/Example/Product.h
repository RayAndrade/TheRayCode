//
// Created by ray on 6/7/23.
//

#ifndef SHOWCPP_PRODUCT_H
#define SHOWCPP_PRODUCT_H


#include <string>

class Product {
public:
    virtual ~Product() {};
    virtual std::string GetName() = 0;
};


#endif //SHOWCPP_PRODUCT_H

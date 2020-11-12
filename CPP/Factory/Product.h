#ifndef FACTORY_PRODUCT_H
#define FACTORY_PRODUCT_H

#include <iostream>

class Product {
public:
    virtual ~Product() {}
    virtual std::string Operation() const = 0;
};
#endif //FACTORY_PRODUCT_H

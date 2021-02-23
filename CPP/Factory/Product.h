#ifndef FACTORY_PRODUCT_H
#define FACTORY_PRODUCT_H
/**
 * The Product interface declares the operations that all concrete products must
 * implement.
 */

#include <iostream>

class Product {
public:
    virtual ~Product() {}
    virtual std::string Operation() const = 0;
};

#endif //FACTORY_PRODUCT_H

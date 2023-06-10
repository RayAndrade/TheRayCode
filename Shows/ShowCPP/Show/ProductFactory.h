//
// Created by ray on 6/7/23.
//

#ifndef SHOWCPP_PRODUCTFACTORY_H
#define SHOWCPP_PRODUCTFACTORY_H


#include "Product.h"
#include "ProductA.h"
#include "ProductB.h"

enum class ProductType {
    A,
    B
};

class ProductFactory {
public:
    static Product* CreateProduct(ProductType type) {
        switch (type) {
            case ProductType::A:
                return new ProductA();
            case ProductType::B:
                return new ProductB();
            default:
                return nullptr;
        }
    }
};


#endif //SHOWCPP_PRODUCTFACTORY_H

#ifndef ABSTRACTFACTORY_PRODUCTA2_H
#define ABSTRACTFACTORY_PRODUCTA2_H

#include "ProductA.h"

class ProductA2 : public ProductA {
    std::string UsefulFunctionA() const override {
        return "The result of the product A2.";
    }
};


#endif //ABSTRACTFACTORY_PRODUCTA2_H

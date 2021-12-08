//
// Created by ray on 12/8/21.
//

#ifndef UNTITLED_ABSTRACTPRODUCTB_H
#define UNTITLED_ABSTRACTPRODUCTB_H
#include "AbstractProductA.h"
class AbstractProductB {
public:
    ~AbstractProductB(){};
    virtual std::string UsefulFunction2() const = 0;
    virtual std::string AnotherUsefulFunctionB(const AbstractProductA &collaborator) const = 0;
};
#endif //UNTITLED_ABSTRACTPRODUCTB_H

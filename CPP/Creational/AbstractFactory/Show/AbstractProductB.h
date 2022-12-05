//
// Created by ray on 12/5/22.
//

#ifndef SHOW_ABSTRACTPRODUCTB_H
#define SHOW_ABSTRACTPRODUCTB_H

#include <string>
#include "AbstractProductA.h"

class AbstractProductB {
public:
    ~AbstractProductB(){};
    virtual std::string UsefulFunction2() const = 0;
    virtual std::string AnotherUsefulFunctionB(const AbstractProductA &collaborator) const = 0;
};


#endif //SHOW_ABSTRACTPRODUCTB_H

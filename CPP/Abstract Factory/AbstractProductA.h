//
// Created by ray on 7/31/20.
//

#ifndef ABSTRACT_FACTORY_ABSTRACTPRODUCTA_H
#define ABSTRACT_FACTORY_ABSTRACTPRODUCTA_H
#include <iostream>

class AbstractProductA {
public:
    virtual ~AbstractProductA(){};
    virtual std::string UsefulFunctionA() const = 0;
};


#endif //ABSTRACT_FACTORY_ABSTRACTPRODUCTA_H

//
// Created by ray on 7/31/20.
//

#ifndef ABSTRACT_FACTORY_ABSTRACTPRODUCTB_H
#define ABSTRACT_FACTORY_ABSTRACTPRODUCTB_H

#include <iostream>
#include "AbstractProductA.h"

class AbstractProductB {
    /**
     * Product B is able to do its own thing...
     */
public:
    virtual ~AbstractProductB(){};
    virtual std::string UsefulFunctionB() const = 0;
    /**
     * ...but it also can collaborate with the ProductA.
     *
     * The Abstract Factory makes sure that all products it creates are of the
     * same variant and thus, compatible.
     */
    virtual std::string AnotherUsefulFunctionB(const AbstractProductA &collaborator) const = 0;
};



#endif //ABSTRACT_FACTORY_ABSTRACTPRODUCTB_H

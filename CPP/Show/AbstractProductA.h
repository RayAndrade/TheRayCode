//
// Created by ray on 7/15/21.
//

#ifndef ABSTRACTFACTORY_ABSTRACTPRODUCTA_H
#define ABSTRACTFACTORY_ABSTRACTPRODUCTA_H
class AbstractProductA {
public:
    AbstractProductA(){};
    virtual std::string UsefulFunctionA() const = 0;
};
#endif //ABSTRACTFACTORY_ABSTRACTPRODUCTA_H

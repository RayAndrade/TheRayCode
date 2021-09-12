//
// Created by ray on 9/11/21.
//

#ifndef ABSTRACTFACTORY_ABSTRACTPRODUCTA_H
#define ABSTRACTFACTORY_ABSTRACTPRODUCTA_H
class AbstractProductA {
public:
    AbstractProductA(){};
    virtual std::string UsefulFunctionA() const = 0;
};
#endif //ABSTRACTFACTORY_ABSTRACTPRODUCTA_H

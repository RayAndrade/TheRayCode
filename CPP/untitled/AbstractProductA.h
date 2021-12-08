//
// Created by ray on 12/8/21.
//

#ifndef UNTITLED_ABSTRACTPRODUCTA_H
#define UNTITLED_ABSTRACTPRODUCTA_H
#include <string>
class AbstractProductA {
public:
    AbstractProductA(){};
    virtual std::string UsefulFunctionA() const = 0;
};
#endif //UNTITLED_ABSTRACTPRODUCTA_H

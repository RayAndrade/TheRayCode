//
// Created by ray on 12/20/21.
//

#ifndef SHOW_ABSTRACTPRODUCTA_H
#define SHOW_ABSTRACTPRODUCTA_H

#include <string>
class AbstractProductA {
public:
    AbstractProductA(){};
    virtual std::string UsefulFunctionA() const = 0;
};

#endif //SHOW_ABSTRACTPRODUCTA_H

//
// Created by The Ray Code on 12/22/21.
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

//
// Created by ray on 7/24/21.
//

#ifndef BRIDGE_IMPLEMENTATION_H
#define BRIDGE_IMPLEMENTATION_H

#include <iostream>

class Implementation {
public:
    virtual ~Implementation() {}
    virtual std::string OperationImplementation() const = 0;
};
#endif //BRIDGE_IMPLEMENTATION_H

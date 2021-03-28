//
// Created by ray on 8/25/20.
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

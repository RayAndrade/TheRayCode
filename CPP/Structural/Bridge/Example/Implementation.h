//
// Created by ray on 8/30/23.
//

#ifndef EXAMPLE_IMPLEMENTATION_H
#define EXAMPLE_IMPLEMENTATION_H

#include <iostream>

class Implementation {
public:
    virtual ~Implementation() {}
    virtual std::string OperationImplementation() const = 0;
};

#endif //EXAMPLE_IMPLEMENTATION_H

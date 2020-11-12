//
// Created by ray on 11/10/20.
//

#ifndef SHOW_IMPLEMENTATION_H
#define SHOW_IMPLEMENTATION_H
#include <iostream>

class Implementation {
public:
    virtual ~Implementation() {}
    virtual std::string OperationImplementation() const = 0;

};

#endif //SHOW_IMPLEMENTATION_H

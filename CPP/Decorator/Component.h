//
// Created by ray on 11/22/20.
//

#ifndef DECORATOR_COMPONENT_H
#define DECORATOR_COMPONENT_H

#include <iostream>

class Component {
public:
    virtual ~Component() {}
    virtual std::string Operation() const = 0;
};

#endif //DECORATOR_COMPONENT_H

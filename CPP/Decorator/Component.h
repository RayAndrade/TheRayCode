//
// Created by ray on 8/25/20.
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

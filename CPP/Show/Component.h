//
// Created by ray on 11/24/20.
//

#ifndef SHOW_COMPONENT_H
#define SHOW_COMPONENT_H

#include <iostream>

class Component {
public:
    virtual ~Component() {}
    virtual std::string Operation() const = 0;
};

#endif //SHOW_COMPONENT_H

//
// Created by ray on 12/13/23.
//

#ifndef EXAMPLE_COMPONENT_H
#define EXAMPLE_COMPONENT_H

#include <string>

class Component {
public:
    virtual ~Component() {}
    virtual std::string operation() const = 0;
};

#endif //EXAMPLE_COMPONENT_H

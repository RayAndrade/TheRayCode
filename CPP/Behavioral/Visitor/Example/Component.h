//
// Created by ray on 9/18/23.
//

#ifndef EXAMPLE_COMPONENT_H
#define EXAMPLE_COMPONENT_H

#include "Visitor.h"

class Component {
public:
    virtual ~Component() {}
    virtual void Accept(Visitor *visitor) const = 0;
};

#endif //EXAMPLE_COMPONENT_H

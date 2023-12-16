//
// Created by ray on 12/13/23.
//

#ifndef EXAMPLE3_COMPONENT_H
#define EXAMPLE3_COMPONENT_H

// Abstract base class representing the primary interface
class Component {
public:
    virtual ~Component() {}
    virtual void operation() = 0;
};

#endif //EXAMPLE3_COMPONENT_H

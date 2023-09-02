//
// Created by ray on 9/1/23.
//

#ifndef EXAMPLE_COMPONENT_H
#define EXAMPLE_COMPONENT_H

#include <iostream>

// Abstract base class for all components
class Component {
public:
    virtual void draw() const = 0; // Render the component
    virtual ~Component() = default;
};

#endif //EXAMPLE_COMPONENT_H

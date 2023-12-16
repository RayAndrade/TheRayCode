//
// Created by ray on 12/13/23.
//

#ifndef EXAMPLE3_CONCRETECOMPONENT_H
#define EXAMPLE3_CONCRETECOMPONENT_H

#include "Component.h"
#include <iostream>

// Concrete implementation of Component
class ConcreteComponent : public Component {
public:
    void operation() override {
        std::cout << "Basic functionality.\n";
    }
};


#endif //EXAMPLE3_CONCRETECOMPONENT_H

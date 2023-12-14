//
// Created by ray on 12/13/23.
//

#ifndef EXAMPLE_CONCRETECOMPONENT_H
#define EXAMPLE_CONCRETECOMPONENT_H

#include "Component.h"

class ConcreteComponent : public Component {
public:
    std::string operation() const override {
        return "ConcreteComponent";
    }
};

#endif //EXAMPLE_CONCRETECOMPONENT_H

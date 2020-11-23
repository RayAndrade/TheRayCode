//
// Created by ray on 11/22/20.
//

#ifndef SHOW_CONCRETECOMPONENT_H
#define SHOW_CONCRETECOMPONENT_H

#include "Component.h"

class ConcreteComponent : public Component {
public:
    std::string Operation() const override {
        return "ConcreteComponent";
    }
};

#endif //SHOW_CONCRETECOMPONENT_H

//
// Created by ray on 9/18/23.
//

#ifndef EXAMPLE_COMPONENTB_H
#define EXAMPLE_COMPONENTB_H

#include <iostream>
#include <array>
#include "Visitor.h"
#include "Component.h"

class ComponentB  : public Component{
public:
    void Accept(Visitor *visitor) const override {
        visitor->VisitConcreteComponentB(this);
    }

    std::string SpecialMethodOfConcreteComponentB() const {
        return "B";
    }
};

#endif //EXAMPLE_COMPONENTB_H

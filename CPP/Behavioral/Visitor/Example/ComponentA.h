//
// Created by ray on 9/18/23.
//

#ifndef EXAMPLE_COMPONENTA_H
#define EXAMPLE_COMPONENTA_H

#include <iostream>
#include <array>
#include "Component.h"

class ComponentA  : public Component{
public:
    void Accept(Visitor *visitor) const  {
        visitor->VisitConcreteComponentA(this);
    }
    std::string ExclusiveMethodOfConcreteComponentA() const {
        return "A";
    }
};

#endif //EXAMPLE_COMPONENTA_H

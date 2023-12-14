#ifndef DECORATOR_CONCRETECOMPONENT_H
#define DECORATOR_CONCRETECOMPONENT_H

#include "Component.h"

class ConcreteComponent : public Component {
public:
    std::string Operation() const override {
        return "ConcreteComponent";
    }
};


#endif //DECORATOR_CONCRETECOMPONENT_H

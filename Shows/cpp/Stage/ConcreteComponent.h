//
// Created by ray on 1/5/24.
//

#ifndef STAGE_CONCRETECOMPONENT_H
#define STAGE_CONCRETECOMPONENT_H

#include "Component.h"
#include <iostream>

class ConcreteComponent  : public Component {
public:
    void operation() override {
        std::cout << "Basic functionality.\n";
    }
};

#endif //STAGE_CONCRETECOMPONENT_H

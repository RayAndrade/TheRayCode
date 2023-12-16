//
// Created by ray on 12/15/23.
//

#ifndef BEGINNING_CONCRETECOMPONENT_H
#define BEGINNING_CONCRETECOMPONENT_H

#include "Component.h"
#include <iostream>

class ConcreteComponent : public Component {
public:
    void operation() override {
        std::cout << "Basic functionality.\n";
    }

};


#endif //BEGINNING_CONCRETECOMPONENT_H

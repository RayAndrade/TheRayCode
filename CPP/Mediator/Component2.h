//
// Created by ray on 8/18/20.
//

#ifndef SHOW_COMPONENT2_H
#define SHOW_COMPONENT2_H
#include <iostream>
#include "BaseComponent.h"


class Component2 : public BaseComponent  {
public:
    void DoC() {
        std::cout << "Component 2 does C.\n";
        this->mediator_->Notify(this, "C");
    }
    void DoD() {
        std::cout << "Component 2 does D.\n";
        this->mediator_->Notify(this, "D");
    }
};


#endif //SHOW_COMPONENT2_H

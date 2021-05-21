//
// Created by ray on 8/18/20.
//

#ifndef SHOW_COMPONENT1_H
#define SHOW_COMPONENT1_H
#include <iostream>
#include "BaseComponent.h"
/**
 * Concrete Components implement various functionality. They don't depend on
 * other components. They also don't depend on any concrete mediator classes.
 */
class FirstComponent : public BaseComponent {
public:
    void DoA() {
        std::cout << "Component 1 does A.\n";
        this->mediator_->Notify(this, "A");
    }
    void DoB() {
        std::cout << "Component 1 does B.\n";
        this->mediator_->Notify(this, "B");
    }
};


#endif //SHOW_COMPONENT1_H

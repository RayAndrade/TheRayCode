//
// Created by ray on 8/18/20.
//

#ifndef SHOW_BASECOMPONENT_H
#define SHOW_BASECOMPONENT_H


/**
 * The Base Component provides the basic functionality of storing a mediator's
 * instance inside component objects.
 */

#include "Mediator.h"

class BaseComponent {
protected:
    Mediator *mediator_;

public:
    BaseComponent(Mediator *mediator = nullptr) : mediator_(mediator) {
    }
    void set_mediator(Mediator *mediator) {
        this->mediator_ = mediator;
    }
};


#endif //SHOW_BASECOMPONENT_H

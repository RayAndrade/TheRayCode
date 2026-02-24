//
// Created by ray on 3/9/24.
//

#ifndef EXAMPLE_CONCRETESTATEB_H
#define EXAMPLE_CONCRETESTATEB_H

#include "State.h"

class ConcreteStateB : public State {
public:
    void handle(Context* context) override;
};

#endif //EXAMPLE_CONCRETESTATEB_H

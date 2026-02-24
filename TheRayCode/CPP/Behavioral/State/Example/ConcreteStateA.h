//
// Created by ray on 3/9/24.
//

#ifndef EXAMPLE_CONCRETESTATEA_H
#define EXAMPLE_CONCRETESTATEA_H

#include "State.h"

class ConcreteStateA : public State {
public:
    void handle(Context* context) override;
};

#endif //EXAMPLE_CONCRETESTATEA_H

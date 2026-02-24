//
// Created by ray on 3/10/24.
//

#ifndef EXAMPLE2_DEVELOPER_H
#define EXAMPLE2_DEVELOPER_H

#include "State.h"

class Developer {
    State* currentState; // The developer's current state of mind and body.
public:
    Developer(State* state) : currentState(state) {}
    void changeState(State* state) {
        currentState = state;
    }
    void liveLife() {
        currentState->handle(this); // Life is unpredictable; let's see what happens next.
    }
};

#endif //EXAMPLE2_DEVELOPER_H

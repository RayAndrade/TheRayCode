//
// Created by ray on 3/9/24.
//

#ifndef EXAMPLE_CONTEXT_H
#define EXAMPLE_CONTEXT_H


#include "State.h"

class Context {
private:
    State* state;
public:
    Context(State* state) : state(state) {}
    ~Context() { delete state; }
    void setState(State* state);
    void request();
};

#endif //EXAMPLE_CONTEXT_H

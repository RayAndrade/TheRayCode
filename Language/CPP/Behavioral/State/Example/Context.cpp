//
// Created by ray on 3/9/24.
//
#include "Context.h"

void Context::setState(State* newState) {
    delete state;
    state = newState;
}

void Context::request() {
    state->handle(this);
}
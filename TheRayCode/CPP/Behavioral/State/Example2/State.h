//
// Created by ray on 3/10/24.
//

#ifndef EXAMPLE2_STATE_H
#define EXAMPLE2_STATE_H

class Developer; // Forward declaration to resolve circular dependency.

class State {
public:
    virtual ~State() = default;
    virtual void handle(Developer* developer) = 0; // Pure virtual function for handling the state.
};

#endif //EXAMPLE2_STATE_H

//
// Created by ray on 3/9/24.
//

#ifndef EXAMPLE_STATE_H
#define EXAMPLE_STATE_H

class Context; // Forward declaration

class State {
public:
    virtual ~State() {}
    virtual void handle(Context* context) = 0;
};

#endif //EXAMPLE_STATE_H

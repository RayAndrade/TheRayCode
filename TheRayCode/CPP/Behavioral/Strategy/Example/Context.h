//
// Created by ray on 3/12/24.
//

#ifndef EXAMPLE_CONTEXT_H
#define EXAMPLE_CONTEXT_H

#include "Strategy.h"

// Context class
class Context {
public:
    Context(Strategy* strategy);
    void setStrategy(Strategy* strategy);
    void executeStrategy();

private:
    Strategy* strategy_;
};

#endif //EXAMPLE_CONTEXT_H

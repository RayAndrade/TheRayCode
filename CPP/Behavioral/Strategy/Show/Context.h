//
// Created by ray on 3/22/24.
//

#ifndef SHOW_CONTEXT_H
#define SHOW_CONTEXT_H

#include "Strategy.h"

class Context {
public:
    Context(Strategy* strategy);
    void setStrategy(Strategy* strategy);
    void executeStrategy();
private:
    Strategy* strategy_;
};

#endif //SHOW_CONTEXT_H

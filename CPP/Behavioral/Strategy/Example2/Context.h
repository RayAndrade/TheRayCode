//
// Created by ray on 3/12/24.
//

#ifndef EXAMPLE2_CONTEXT_H
#define EXAMPLE2_CONTEXT_H

#include "Strategy.h"

// Context class
class Context {
private:
    Strategy* strategy_;

public:
    Context(Strategy* strategy) : strategy_(strategy) {}

    void setStrategy(Strategy* strategy) {
        strategy_ = strategy;
    }

    void executeStrategy() const {
        if (strategy_)
            strategy_->execute();
    }
};

#endif //EXAMPLE2_CONTEXT_H

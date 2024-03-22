//
// Created by ray on 3/21/24.
//

#include "Context.h"
Context::Context(Strategy* strategy) : strategy_(strategy) {}

void Context::setStrategy(Strategy* strategy) {
    strategy_ = strategy;
}

void Context::executeStrategy() {
    if (strategy_)
        strategy_->execute();
}

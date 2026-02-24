//
// Created by ray on 3/20/24.
//

#ifndef EXAMPLE3_JUGGLER_H
#define EXAMPLE3_JUGGLER_H

#include "Strategy.h"
#include <memory>

class Juggler {
private:
    std::unique_ptr<Strategy> strategy;
public:
    Juggler(std::unique_ptr<Strategy> strategy) : strategy(std::move(strategy)) {}
    void setStrategy(std::unique_ptr<Strategy> newStrategy) {
        strategy = std::move(newStrategy);
    }
    void perform() const {
        strategy->juggle();
    }
};

#endif //EXAMPLE3_JUGGLER_H

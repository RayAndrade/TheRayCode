//
// Created by ray on 3/20/24.
//

#ifndef EXAMPLE2_STRATEGY_H
#define EXAMPLE2_STRATEGY_H

#include <iostream>

// Abstract strategy for maze navigation.
class Strategy {
public:
    virtual ~Strategy() {}
    virtual std::string navigate() const = 0;
};

#endif //EXAMPLE2_STRATEGY_H

//
// Created by ray on 3/12/24.
//

#ifndef EXAMPLE_STRATEGY_H
#define EXAMPLE_STRATEGY_H

// Abstract Strategy class
class Strategy {
public:
    virtual ~Strategy() {}
    virtual void execute() = 0;
};

#endif //EXAMPLE_STRATEGY_H

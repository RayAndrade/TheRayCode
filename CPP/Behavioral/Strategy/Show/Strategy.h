//
// Created by ray on 3/22/24.
//

#ifndef SHOW_STRATEGY_H
#define SHOW_STRATEGY_H

// Abstract Strategy class
class Strategy {
public:
    virtual ~Strategy() {}
    virtual void execute() = 0;
};

#endif //SHOW_STRATEGY_H

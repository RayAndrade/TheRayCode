//
// Created by ray on 3/20/24.
//

#ifndef EXAMPLE3_STRATEGY_H
#define EXAMPLE3_STRATEGY_H

class Strategy {
public:
    virtual ~Strategy() {}
    virtual void juggle() const = 0;
};

#endif //EXAMPLE3_STRATEGY_H

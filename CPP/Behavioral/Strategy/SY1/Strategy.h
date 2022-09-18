#ifndef STRATEGY_STRATEGY_H
#define STRATEGY_STRATEGY_H
#include <string>
#include <vector>

class Strategy {
public:
    virtual ~Strategy() {}
    virtual std::string DoAlgorithm(const std::vector<std::string> &data) const = 0;
};

#endif //STRATEGY_STRATEGY_H

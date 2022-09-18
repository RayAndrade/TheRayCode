#ifndef STRATEGY_CONCRETESTRATEGYB_H
#define STRATEGY_CONCRETESTRATEGYB_H
#include <iostream>
#include <algorithm>
#include "Strategy.h"


class ConcreteStrategyB  : public Strategy {
    std::string DoAlgorithm(const std::vector<std::string> &data) const override
    {
        std::string result;
        std::for_each(std::begin(data), std::end(data), [&result](const std::string &letter) {
            result += letter;
        });
        std::sort(std::begin(result), std::end(result));
        for (int i = 0; i < result.size() / 2; i++)
        {
            std::swap(result[i], result[result.size() - i - 1]);
        }

        return result;
    }


};


#endif //STRATEGY_CONCRETESTRATEGYB_H

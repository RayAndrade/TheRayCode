#ifndef STRATEGY_CONCRETESTRATEGYA_H
#define STRATEGY_CONCRETESTRATEGYA_H

#include <iostream>
#include <algorithm>
#include "Strategy.h"


class ConcreteStrategyA : public Strategy {
public:
    std::string DoAlgorithm(const std::vector<std::string> &data) const override
    {
        std::string result;
        std::for_each(std::begin(data), std::end(data), [&result](const std::string &letter) {
            result += letter;
        });
        std::sort(std::begin(result), std::end(result));

        return result;
    }
};


#endif //STRATEGY_CONCRETESTRATEGYA_H

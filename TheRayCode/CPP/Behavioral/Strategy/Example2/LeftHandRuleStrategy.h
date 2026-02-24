//
// Created by ray on 3/20/24.
//

#ifndef EXAMPLE2_LEFTHANDRULESTRATEGY_H
#define EXAMPLE2_LEFTHANDRULESTRATEGY_H

#include "Strategy.h"

// Concrete strategy for navigating mazes using the left-hand rule.
class LeftHandRuleStrategy : public Strategy {
public:
    std::string navigate() const override {
        return "Following left wall. Success!";
    }
};

#endif //EXAMPLE2_LEFTHANDRULESTRATEGY_H

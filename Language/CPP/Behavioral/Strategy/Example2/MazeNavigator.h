//
// Created by ray on 3/20/24.
//

#ifndef EXAMPLE2_MAZENAVIGATOR_H
#define EXAMPLE2_MAZENAVIGATOR_H

#include "Strategy.h"

// Context class configured with a strategy for maze navigation.
class MazeNavigator {
    const Strategy* strategy_;
public:
    MazeNavigator(const Strategy* strategy = nullptr) : strategy_(strategy) {}
    ~MazeNavigator() { delete strategy_; }

    void setStrategy(const Strategy* strategy) {
        delete strategy_;
        strategy_ = strategy;
    }

    void navigateMaze() const {
        if (strategy_) {
            std::cout << strategy_->navigate() << std::endl;
        } else {
            std::cout << "No strategy set. I'm hopelessly lost!" << std::endl;
        }
    }
};


#endif //EXAMPLE2_MAZENAVIGATOR_H

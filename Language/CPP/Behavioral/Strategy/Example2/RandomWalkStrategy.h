//
// Created by ray on 3/20/24.
//

#ifndef EXAMPLE2_RANDOMWALKSTRATEGY_H
#define EXAMPLE2_RANDOMWALKSTRATEGY_H

#include "Strategy.h"
#include <stdlib.h> // For rand()
#include <time.h>   // For time()

// A humorous strategy involving random moves until the exit is found.
class RandomWalkStrategy : public Strategy {
public:
    RandomWalkStrategy() {
        // Seed for random number generation
        srand(time(NULL));
    }

    std::string navigate() const override {
        int steps = rand() % 100 + 1; // Random steps between 1 and 100
        return "Randomly walked " + std::to_string(steps) + " steps and somehow found the exit!";
    }
};

#endif //EXAMPLE2_RANDOMWALKSTRATEGY_H

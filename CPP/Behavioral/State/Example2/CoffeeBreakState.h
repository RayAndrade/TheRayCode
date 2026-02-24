//
// Created by ray on 3/10/24.
//

#ifndef EXAMPLE2_COFFEEBREAKSTATE_H
#define EXAMPLE2_COFFEEBREAKSTATE_H

#include "State.h"
#include "Developer.h"
#include <iostream>

class CoffeeBreakState : public State {
public:
    void handle(Developer* developer) override {
        std::cout << "The developer is on a coffee break... Sixth cup today but who's counting?" << std::endl;
        // Transition to the next state could be added here.
    }
};

#endif //EXAMPLE2_COFFEEBREAKSTATE_H

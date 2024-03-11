//
// Created by ray on 3/10/24.
//

#ifndef EXAMPLE2_SLEEPINGSTATE_H
#define EXAMPLE2_SLEEPINGSTATE_H

#include "State.h"
#include "Developer.h"
#include <iostream>

class SleepingState : public State {
public:
    void handle(Developer* developer) override {
        std::cout << "The developer is sleeping... Probably dreaming in code." << std::endl;
        // Transition to the next state could be added here.
    }
};

#endif //EXAMPLE2_SLEEPINGSTATE_H

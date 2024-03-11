//
// Created by ray on 3/10/24.
//

#ifndef EXAMPLE2_CODINGSTATE_H
#define EXAMPLE2_CODINGSTATE_H

#include "State.h"
#include "Developer.h"
#include <iostream>

class CodingState : public State {
public:
    void handle(Developer* developer) override {
        std::cout << "The developer is coding... Hopefully not browsing Stack Overflow again." << std::endl;
        // Transition to the next state could be added here.
    }
};

#endif //EXAMPLE2_CODINGSTATE_H

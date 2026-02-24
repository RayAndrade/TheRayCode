//
// Created by ray on 3/20/24.
//

#ifndef EXAMPLE3_JUGGLEKNIVES_H
#define EXAMPLE3_JUGGLEKNIVES_H

#include "Strategy.h"
#include <iostream>

class JuggleKnives : public Strategy {
public:
    void juggle() const override {
        std::cout << "Juggling knives! Don't try this at home." << std::endl;
    }
};

#endif //EXAMPLE3_JUGGLEKNIVES_H

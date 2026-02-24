//
// Created by ray on 3/20/24.
//

#ifndef EXAMPLE3_JUGGLECHAINSAWS_H
#define EXAMPLE3_JUGGLECHAINSAWS_H

#include "Strategy.h"
#include <iostream>

class JuggleChainsaws : public Strategy {
public:
    void juggle() const override {
        std::cout << "Juggling chainsaws! Seriously, how am I still alive?" << std::endl;
    }
};

#endif //EXAMPLE3_JUGGLECHAINSAWS_H

//
// Created by ray on 3/20/24.
//

#ifndef EXAMPLE3_JUGGLEBALLS_H
#define EXAMPLE3_JUGGLEBALLS_H

#include "Strategy.h"
#include <iostream>

class JuggleBalls : public Strategy {
public:
    void juggle() const override {
        std::cout << "Juggling balls! Safe and sound." << std::endl;
    }
};

#endif //EXAMPLE3_JUGGLEBALLS_H

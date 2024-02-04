//
// Created by ray on 2/3/24.
//

#ifndef EXAMPLE2_CONCRETEFLYWEIGHT_H
#define EXAMPLE2_CONCRETEFLYWEIGHT_H

#include "Flyweight.h"
#include <iostream>

class ConcreteFlyweight : public Flyweight {
private:
    std::string joke; // The shared joke
public:
    ConcreteFlyweight(const std::string& joke) : joke(joke) {}
    void tellJoke() const override {
        std::cout << joke << std::endl;
    }
};

#endif //EXAMPLE2_CONCRETEFLYWEIGHT_H

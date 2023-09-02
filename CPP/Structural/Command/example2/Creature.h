//
// Created by ray on 9/1/23.
//

#ifndef EXAMPLE2_CREATURE_H
#define EXAMPLE2_CREATURE_H

#include <iostream>

// Abstract base class for all creatures
class Creature {
public:
    virtual void scare() const = 0; // Method to show a scary action
    virtual ~Creature() = default;
};

#endif //EXAMPLE2_CREATURE_H

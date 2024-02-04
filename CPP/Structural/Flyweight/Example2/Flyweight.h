//
// Created by ray on 2/3/24.
//

#ifndef EXAMPLE2_FLYWEIGHT_H
#define EXAMPLE2_FLYWEIGHT_H

#include <string>

class Flyweight {
public:
    virtual ~Flyweight() = default;
    virtual void tellJoke() const = 0; // Each plant tells a joke
};

#endif //EXAMPLE2_FLYWEIGHT_H

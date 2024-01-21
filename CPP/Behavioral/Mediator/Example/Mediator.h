//
// Created by ray on 1/20/24.
//

#ifndef EXAMPLE_MEDIATOR_H
#define EXAMPLE_MEDIATOR_H

#include <string>

class Superhero;

class Mediator {
public:
    virtual void sendMessage(const Superhero* sender, const std::string& message) = 0;
};

#endif //EXAMPLE_MEDIATOR_H

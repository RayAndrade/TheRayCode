//
// Created by ray on 1/22/24.
//

#ifndef EXAMPLE2_MEDIATOR_H
#define EXAMPLE2_MEDIATOR_H

#include <string>

class Superhero;

class Mediator {
public:
    virtual void sendMessage(const Superhero* sender, const std::string& message) = 0;
};

#endif //EXAMPLE2_MEDIATOR_H

//
// Created by ray on 1/22/24.
//

#ifndef EXAMPLE_MEDIATOR_H
#define EXAMPLE_MEDIATOR_H


#include <string>

class User;

class Mediator {
public:
    virtual void sendMessage(const std::string& message, User* user) = 0;
};

#endif //EXAMPLE_MEDIATOR_H

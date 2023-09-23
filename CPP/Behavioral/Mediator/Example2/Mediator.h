//
// Created by ray on 9/23/23.
//

#ifndef EXAMPLE2_MEDIATOR_H
#define EXAMPLE2_MEDIATOR_H


#include <string>

class User;

class Mediator {
public:
    virtual void sendMessage(const std::string& message, User* user) = 0;
};

#endif //EXAMPLE2_MEDIATOR_H

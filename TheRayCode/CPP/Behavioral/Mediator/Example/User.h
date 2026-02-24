//
// Created by ray on 1/22/24.
//

#ifndef EXAMPLE_USER_H
#define EXAMPLE_USER_H

#include "Mediator.h"
#include <iostream>

class User {
protected:
    Mediator* _mediator;
    std::string _name;

public:
    User(Mediator* mediator, const std::string& name) : _mediator(mediator), _name(name) {}
    virtual ~User() {}

    void sendMessage(const std::string& message) {
        _mediator->sendMessage(message, this);
    }

    virtual void receiveMessage(const std::string& message) {
        std::cout << _name << " received: " << message << std::endl;
    }

    const std::string& getName() const { return _name; }
};

#endif //EXAMPLE_USER_H

//
// Created by ray on 9/23/23.
//

#ifndef UNTITLED_SUPERMAN_H
#define UNTITLED_SUPERMAN_H

#include "Superhero.h"

class Superman : public Superhero {
public:
    Superman(JusticeLeagueMediator* m) : Superhero(m, "Superman") {}

    void send(const std::string& message) override {
        mediator->sendMessage(this, message);
    }

    void receive(const std::string& from, const std::string& message) override {
        std::cout << name << " received a message from " << from << ": " << message << std::endl;
    }
};

#endif //UNTITLED_SUPERMAN_H

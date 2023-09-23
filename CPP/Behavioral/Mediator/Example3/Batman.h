//
// Created by ray on 9/23/23.
//

#ifndef UNTITLED_BATMAN_H
#define UNTITLED_BATMAN_H


#include "Superhero.h"

class Batman : public Superhero {
public:
    Batman(JusticeLeagueMediator* m) : Superhero(m, "Batman") {}

    void send(const std::string& message) override {
        mediator->sendMessage(this, message);
    }

    void receive(const std::string& from, const std::string& message) override {
        std::cout << name << " received a message from " << from << ": " << message << std::endl;
    }
};

#endif //UNTITLED_BATMAN_H

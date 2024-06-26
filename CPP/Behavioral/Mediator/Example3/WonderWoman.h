//
// Created by ray on 1/21/24.
//

#ifndef UNTITLED_WONDERWOMAN_H
#define UNTITLED_WONDERWOMAN_H

#include "Superhero.h"

class WonderWoman : public Superhero {
public:
    WonderWoman(JusticeLeagueMediator* m) : Superhero(m, "WonderWoman") {}

    void send(const std::string& message) override {
        mediator->sendMessage(this, message);
    }

    void receive(const std::string& from, const std::string& message) override {
        std::cout << name << " received a message from " << from << ": " << message << std::endl;
    }
};

#endif //UNTITLED_WONDERWOMAN_H

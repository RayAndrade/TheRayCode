//
// Created by ray on 1/22/24.
//

#include "Superhero.h"
#include "Mediator.h"
#include <iostream>

Superhero::Superhero(const std::string& name, Mediator* mediator)
        : name(name), mediator(mediator) {
}

void Superhero::sendMessage(const std::string& message) {
    std::cout << name << " sends message: " << message << std::endl;
    mediator->sendMessage(this, message);
}

void Superhero::receiveMessage(const std::string& message) {
    std::cout << name << " receives message: " << message << std::endl;
}

const std::string& Superhero::getName() const {
    return name;
}

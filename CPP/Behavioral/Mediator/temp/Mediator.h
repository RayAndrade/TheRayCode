//
// Created by ray on 1/22/24.
//

#ifndef TEMP_MEDIATOR_H
#define TEMP_MEDIATOR_H

#pragma once
#include <string>

class Superhero;

class Mediator {
public:
    virtual void sendMessage(const Superhero* sender, const std::string& message) = 0;
};



#endif //TEMP_MEDIATOR_H

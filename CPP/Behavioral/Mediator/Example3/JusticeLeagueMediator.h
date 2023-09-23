//
// Created by ray on 9/23/23.
//

#ifndef UNTITLED_JUSTICELEAGUEMEDIATOR_H
#define UNTITLED_JUSTICELEAGUEMEDIATOR_H

#include <iostream>

class Superhero; // forward declaration

class JusticeLeagueMediator {
public:
    virtual ~JusticeLeagueMediator() {}
    virtual void sendMessage(Superhero* sender, const std::string& message) = 0;
};

#endif //UNTITLED_JUSTICELEAGUEMEDIATOR_H

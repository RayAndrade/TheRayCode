//
// Created by ray on 9/23/23.
//

#ifndef UNTITLED_SUPERHERO_H
#define UNTITLED_SUPERHERO_H


#include <string>
#include "JusticeLeagueMediator.h"

class Superhero {
protected:
    JusticeLeagueMediator* mediator;

public:
    Superhero(JusticeLeagueMediator* m, const std::string& n) : mediator(m), name(n) {}
    virtual ~Superhero() {}
    virtual void send(const std::string& message) = 0;
    virtual void receive(const std::string& from, const std::string& message) = 0;

    std::string name;
};

#endif //UNTITLED_SUPERHERO_H

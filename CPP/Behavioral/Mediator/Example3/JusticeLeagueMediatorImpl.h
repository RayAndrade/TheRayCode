//
// Created by ray on 9/23/23.
//

#ifndef UNTITLED_JUSTICELEAGUEMEDIATORIMPL_H
#define UNTITLED_JUSTICELEAGUEMEDIATORIMPL_H

#include <vector>
#include "JusticeLeagueMediator.h"
#include "Superhero.h"

class JusticeLeagueMediatorImpl : public JusticeLeagueMediator {
    std::vector<Superhero*> members;

public:
    void addMember(Superhero* hero) {
        members.push_back(hero);
    }

    void sendMessage(Superhero* sender, const std::string& message) override {
        for (Superhero* hero : members) {
            if (hero != sender) {
                hero->receive(sender->name, message);
            }
        }
    }
};

#endif //UNTITLED_JUSTICELEAGUEMEDIATORIMPL_H

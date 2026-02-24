//
// Created by ray on 1/22/24.
//

#include "SuperheroTeam.h"
#include "Superhero.h"

void SuperheroTeam::addSuperhero(Superhero* superhero) {
    superheroes.push_back(superhero);
}

void SuperheroTeam::sendMessage(const Superhero* sender, const std::string& message) {
    for (Superhero* superhero : superheroes) {
        if (superhero != sender) {
            superhero->receiveMessage(message);
        }
    }
}
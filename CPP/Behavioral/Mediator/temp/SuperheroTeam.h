//
// Created by ray on 1/22/24.
//

#ifndef TEMP_SUPERHEROTEAM_H
#define TEMP_SUPERHEROTEAM_H

#include "Mediator.h"
#include <vector>

class Superhero;

class SuperheroTeam : public Mediator {
public:
    void addSuperhero(Superhero* superhero);
    void sendMessage(const Superhero* sender, const std::string& message) override;

private:
    std::vector<Superhero*> superheroes;
};

#endif //TEMP_SUPERHEROTEAM_H

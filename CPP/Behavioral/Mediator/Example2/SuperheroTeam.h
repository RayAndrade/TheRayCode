//
// Created by ray on 1/22/24.
//

#ifndef EXAMPLE2_SUPERHEROTEAM_H
#define EXAMPLE2_SUPERHEROTEAM_H

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

#endif //EXAMPLE2_SUPERHEROTEAM_H

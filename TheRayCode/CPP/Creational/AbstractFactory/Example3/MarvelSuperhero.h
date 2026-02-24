//
// Created by ray on 11/4/23.
//

#ifndef BEGINNING_MARVELSUPERHERO_H
#define BEGINNING_MARVELSUPERHERO_H

#include "Superhero.h"

// Concrete superhero from Marvel Comics
class MarvelSuperhero : public Superhero {
private:
    std::string name;
public:
    MarvelSuperhero(const std::string& heroName) : name(heroName) {}
    std::string getName() const override {
        return name + " from Marvel Comics";
    }
};

#endif //BEGINNING_MARVELSUPERHERO_H

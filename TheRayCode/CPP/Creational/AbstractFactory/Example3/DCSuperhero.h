//
// Created by ray on 11/4/23.
//

#ifndef BEGINNING_DCSUPERHERO_H
#define BEGINNING_DCSUPERHERO_H


#include "Superhero.h"

// Concrete superhero from DC Comics
class DCSuperhero : public Superhero {
private:
    std::string name;
public:
    DCSuperhero(const std::string& heroName) : name(heroName) {}
    std::string getName() const override {
        return name + " from DC Comics";
    }
};

#endif //BEGINNING_DCSUPERHERO_H

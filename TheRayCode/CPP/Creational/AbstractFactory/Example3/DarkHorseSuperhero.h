//
// Created by ray on 11/4/23.
//

#ifndef BEGINNING_DARKHORSESUPERHERO_H
#define BEGINNING_DARKHORSESUPERHERO_H

#include "Superhero.h"

// Concrete superhero from Dark Horse Comics
class DarkHorseSuperhero : public Superhero {
private:
    std::string name;
public:
    DarkHorseSuperhero(const std::string& heroName) : name(heroName) {}
    std::string getName() const override {
        return name + " from Dark Horse Comics";
    }
};
#endif //BEGINNING_DARKHORSESUPERHERO_H

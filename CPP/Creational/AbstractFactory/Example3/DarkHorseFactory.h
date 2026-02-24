//
// Created by ray on 11/4/23.
//

#ifndef BEGINNING_DARKHORSEFACTORY_H
#define BEGINNING_DARKHORSEFACTORY_H


#include "ComicFactory.h"
#include "DarkHorseSuperhero.h"

// Concrete factory for creating Dark Horse superheroes
class DarkHorseFactory : public ComicFactory {
public:
    Superhero* createSuperhero(const std::string& name) override {
        return new DarkHorseSuperhero(name);
    }
};
#endif //BEGINNING_DARKHORSEFACTORY_H

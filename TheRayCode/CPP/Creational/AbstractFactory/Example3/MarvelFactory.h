//
// Created by ray on 11/4/23.
//

#ifndef BEGINNING_MARVELFACTORY_H
#define BEGINNING_MARVELFACTORY_H


#include "ComicFactory.h"
#include "MarvelSuperhero.h"

// Concrete factory for creating Marvel superheroes
class MarvelFactory : public ComicFactory {
public:
    Superhero* createSuperhero(const std::string& name) override {
        return new MarvelSuperhero(name);
    }
};

#endif //BEGINNING_MARVELFACTORY_H

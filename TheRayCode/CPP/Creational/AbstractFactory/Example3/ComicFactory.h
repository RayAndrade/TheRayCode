//
// Created by ray on 11/4/23.
//

#ifndef BEGINNING_COMICFACTORY_H
#define BEGINNING_COMICFACTORY_H

#include "Superhero.h"

// Abstract factory for creating superheroes
class ComicFactory {
public:
    virtual ~ComicFactory() {}
    virtual Superhero* createSuperhero(const std::string& name) = 0;
};
#endif //BEGINNING_COMICFACTORY_H

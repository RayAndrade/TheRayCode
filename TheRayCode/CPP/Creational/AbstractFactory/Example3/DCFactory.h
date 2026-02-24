//
// Created by ray on 11/4/23.
//

#ifndef BEGINNING_DCFACTORY_H
#define BEGINNING_DCFACTORY_H


#include "ComicFactory.h"
#include "DCSuperhero.h"

// Concrete factory for creating DC superheroes
class DCFactory : public ComicFactory {
public:
    Superhero* createSuperhero(const std::string& name) override {
        return new DCSuperhero(name);
    }
};

#endif //BEGINNING_DCFACTORY_H

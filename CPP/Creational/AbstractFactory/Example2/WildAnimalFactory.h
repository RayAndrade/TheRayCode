//
// Created by ray on 11/3/23.
//

#ifndef BEGINNING_WILDANIMALFACTORY_H
#define BEGINNING_WILDANIMALFACTORY_H

#include "AnimalFactory.h"
#include "Hyena.h"
#include "Wolf.h"
#include "Fox.h"
#include "Lion.h"

// Concrete Factory for Wild Animals
class WildAnimalFactory : public AnimalFactory {
public:
    Dog* createDog() const override {
        // Can be randomized or modified to return different types of wild dogs
        return new Hyena();
    }

    Cat* createCat() const override {
        // Can be randomized or modified to return different types of wild cats
        return new Lion();
    }
};

#endif //BEGINNING_WILDANIMALFACTORY_H

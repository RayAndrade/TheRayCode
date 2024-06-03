//
// Created by ray on 5/30/24.
//

#ifndef SHOW_WILDANIMALFACTORY_H
#define SHOW_WILDANIMALFACTORY_H

#include "AnimalFactory.h"
#include "Hyena.h"
#include "Wolf.h"
#include "Fox.h"
#include "Lion.h"

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

#endif //SHOW_WILDANIMALFACTORY_H

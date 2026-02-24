//
// Created by ray on 11/3/23.
//

#ifndef BEGINNING_DOMESTICANIMALFACTORY_H
#define BEGINNING_DOMESTICANIMALFACTORY_H

#include "AnimalFactory.h"
#include "Poodle.h"
#include "Collie.h"
#include "Shepherd.h"
#include "DomesticCat.h"

// Concrete Factory for Domestic Animals
class DomesticAnimalFactory : public AnimalFactory {
public:
    Dog* createDog() const override {
        // Can be randomized or modified to return different types of domestic dogs
        return new Poodle();
    }

    Cat* createCat() const override {
        // Can be randomized or modified to return different types of domestic cats
        return new DomesticCat();
    }
};

#endif //BEGINNING_DOMESTICANIMALFACTORY_H

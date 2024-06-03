//
// Created by ray on 5/30/24.
//

#ifndef SHOW_DOMESTICANIMALFACTORY_H
#define SHOW_DOMESTICANIMALFACTORY_H

#include "AnimalFactory.h"
#include "Poodle.h"
#include "Collie.h"
#include "Shepherd.h"
#include "DomesticCat.h"

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

#endif //SHOW_DOMESTICANIMALFACTORY_H

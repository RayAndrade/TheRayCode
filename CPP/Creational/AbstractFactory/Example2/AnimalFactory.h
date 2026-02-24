//
// Created by ray on 11/3/23.
//

#ifndef BEGINNING_ANIMALFACTORY_H
#define BEGINNING_ANIMALFACTORY_H

#include "Dog.h"
#include "Cat.h"

// Abstract Factory
class AnimalFactory {
public:
    virtual Dog* createDog() const

    = 0;
    virtual Cat* createCat() const = 0;
    virtual ~AnimalFactory() {}
};

#endif //BEGINNING_ANIMALFACTORY_H

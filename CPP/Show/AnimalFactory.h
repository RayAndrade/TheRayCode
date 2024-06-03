//
// Created by ray on 5/30/24.
//

#ifndef SHOW_ANIMALFACTORY_H
#define SHOW_ANIMALFACTORY_H

#include "Dog.h"
#include "Cat.h"

class AnimalFactory {
public:
    virtual Dog* createDog() const  = 0;

    virtual Cat* createCat() const = 0;

    virtual ~AnimalFactory() {}
};

#endif //SHOW_ANIMALFACTORY_H

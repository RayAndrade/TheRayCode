//
// Created by ray on 11/3/23.
//

#ifndef BEGINNING_ANIMAL_H
#define BEGINNING_ANIMAL_H

#include <string>

class Animal {
public:
    virtual ~Animal() {}
    virtual std::string makeSound() const = 0;
    virtual std::string getName() const = 0;
};

#endif //BEGINNING_ANIMAL_H

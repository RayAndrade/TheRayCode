//
// Created by ray on 5/30/24.
//

#ifndef SHOW_ANIMAL_H
#define SHOW_ANIMAL_H

#include <string>

class Animal {
public:
    virtual ~Animal() {}
    virtual std::string makeSound() const = 0;
    virtual std::string getName() const = 0;
};

#endif //SHOW_ANIMAL_H

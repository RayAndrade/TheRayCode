//
// Created by ray on 11/4/23.
//

#ifndef BEGINNING_SUPERHERO_H
#define BEGINNING_SUPERHERO_H

#include <string>

// Abstract base class for a superhero
class Superhero {
public:
    virtual ~Superhero() {}
    virtual std::string getName() const = 0;
};
#endif //BEGINNING_SUPERHERO_H

//
// Created by ray on 8/19/20.
//

#ifndef MEMENTO_MEMENTO_H
#define MEMENTO_MEMENTO_H
#include <iostream>

class Memento {

public:
    virtual std::string GetName() const = 0;
    virtual std::string date() const = 0;
    virtual std::string state() const = 0;

};


#endif //MEMENTO_MEMENTO_H

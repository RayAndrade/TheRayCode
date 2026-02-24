//
// Created by ray on 9/21/23.
//

#ifndef EXAMPLE3_MEMENTO_H
#define EXAMPLE3_MEMENTO_H

#include <string>

class Memento {
private:
    std::string state;

public:
    Memento(const std::string &s) : state(s) {}

    std::string getState() const {
        return state;
    }
};

#endif //EXAMPLE3_MEMENTO_H

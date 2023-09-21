//
// Created by ray on 9/20/23.
//

#ifndef EXAMPLE_ORIGINATOR_H
#define EXAMPLE_ORIGINATOR_H

#include "Memento.h"
#include <iostream>

class Originator {
private:
    std::string state;

public:
    void setState(const std::string &s) { state = s; }
    std::string getState() const { return state; }

    Memento saveToMemento() {
        return Memento(state);
    }

    void restoreFromMemento(const Memento &m) {
        state = m.getState();
    }
};

#endif //EXAMPLE_ORIGINATOR_H

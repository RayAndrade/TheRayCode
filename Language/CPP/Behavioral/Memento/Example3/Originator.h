//
// Created by ray on 9/21/23.
//

#ifndef EXAMPLE3_ORIGINATOR_H
#define EXAMPLE3_ORIGINATOR_H

#include "Memento.h"
#include <string>

class Originator {
private:
    std::string state;

public:
    void set(const std::string &s) {
        state = s;
        std::cout << "Originator: Setting state to " << s << std::endl;
    }

    Memento saveToMemento() {
        std::cout << "Originator: Saving to Memento." << std::endl;
        return Memento(state);
    }

    void restoreFromMemento(const Memento &m) {
        state = m.getState();
        std::cout << "Originator: State after restoring from Memento: " << state << std::endl;
    }
};

#endif //EXAMPLE3_ORIGINATOR_H

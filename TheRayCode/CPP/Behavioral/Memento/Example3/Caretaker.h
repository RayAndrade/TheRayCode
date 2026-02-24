//
// Created by ray on 9/21/23.
//

#ifndef EXAMPLE3_CARETAKER_H
#define EXAMPLE3_CARETAKER_H

#include "Memento.h"
#include <vector>

class Caretaker {
private:
    std::vector<Memento> mementos;

public:
    void addMemento(const Memento &m) {
        mementos.push_back(m);
    }

    Memento getMemento(int index) {
        return mementos[index];
    }
};

#endif //EXAMPLE3_CARETAKER_H

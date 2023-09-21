//
// Created by ray on 9/20/23.
//

#ifndef EXAMPLE_CARETAKER_H
#define EXAMPLE_CARETAKER_H

#include "Memento.h"
#include <vector>

class Caretaker {
private:
    std::vector<Memento> mementoList;

public:
    void add(const Memento &m) {
        mementoList.push_back(m);
    }

    Memento get(int index) {
        if (index < 0 || index >= mementoList.size()) {
            throw std::out_of_range("Index out of bounds");
        }
        return mementoList[index];
    }
};

#endif //EXAMPLE_CARETAKER_H

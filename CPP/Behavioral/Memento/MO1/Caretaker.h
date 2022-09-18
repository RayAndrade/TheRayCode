//
// Created by ray on 8/20/20.
//

#ifndef MEMENTO_CARETAKER_H
#define MEMENTO_CARETAKER_H

#include <iostream>
//#include <string>
#include <ctime>
#include <vector>
#include "Memento.h"
#include "Originator.h"

class Caretaker {

private:
    std::vector<Memento *> mementos_;


    Originator *originator_;

public:
    Caretaker(Originator *originator) : originator_(originator) {
        this->originator_ = originator;
    }

    void Backup() {
        std::cout << "\nCaretaker: Saving Originator's state...\n";
        this->mementos_.push_back(this->originator_->Save());
    }
    void Undo() {
        if (!this->mementos_.size()) {
            return;
        }
        Memento *memento = this->mementos_.back();
        this->mementos_.pop_back();
        std::cout << "Caretaker: Restoring state to: " << memento->GetName() << "\n";
        try {
            this->originator_->Restore(memento);
        } catch (...) {
            this->Undo();
        }
    }
    void ShowHistory() const {
        std::cout << "Caretaker: Here's the list of mementos:\n";
        for (Memento *memento : this->mementos_) {
            std::cout << memento->GetName() << "\n";
        }
    }
};


#endif //MEMENTO_CARETAKER_H

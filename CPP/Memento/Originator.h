#ifndef MEMENTO_ORIGINATOR_H
#define MEMENTO_ORIGINATOR_H

#include <iostream>

#include "Memento.h"
#include "SolverMemento.h"

class Originator {

private:
    std::string state_;

    std::string GenerateRandomString(int length = 10) {
        const char alphanum[] =
                "0123456789"
                "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
                "abcdefghijklmnopqrstuvwxyz";
        int stringLength = sizeof(alphanum) - 1;

        std::string random_string;
        for (int i = 0; i < length; i++) {
            random_string += alphanum[std::rand() % stringLength];
        }
        return random_string;
    }

public:
    Originator(std::string state) : state_(state) {
        std::cout << "Originator: My initial state is: " << this->state_ << "\n";
    }
    /**
     * The Originator's business logic may affect its internal state. Therefore,
     * the client should backup the state before launching methods of the business
     * logic via the save() method.
     */
    void DoSomething() {
        std::cout << "Originator: I'm doing something important.\n";
        this->state_ = this->GenerateRandomString(30);
        std::cout << "Originator: and my state has changed to: " << this->state_ << "\n";
    }

    /**
     * Saves the current state inside a memento.
     */
    Memento *Save() {
        return new SolverMemento(this->state_);
    }
    /**
     * Restores the Originator's state from a memento object.
     */
    void Restore(Memento *memento) {
        this->state_ = memento->state();
        std::cout << "Originator: My state has changed to: " << this->state_ << "\n";
    }
};


#endif //MEMENTO_ORIGINATOR_H

//
// Created by ray on 8/19/20.
//

#ifndef MEMENTO_CONCRETEMEMENTO_H
#define MEMENTO_CONCRETEMEMENTO_H
#include <ctime>
#include "Memento.h"


class ConcreteMemento : public Memento {

private:
    std::string state_;
    std::string date_;

public:
    ConcreteMemento(std::string state) : state_(state) {
        this->state_ = state;
        std::time_t now = std::time(0);
        this->date_ = std::ctime(&now);
    }
    /**
     * The Originator uses this method when restoring its state.
     */
    std::string state() const override {
        return this->state_;
    }
    /**
     * The rest of the methods are used by the Caretaker to display metadata.
     */
    std::string GetName() const override {
        return this->date_ + " / (" + this->state_.substr(0, 9) + "...)";
    }
    std::string date() const override {
        return this->date_;
    }

};


#endif //MEMENTO_CONCRETEMEMENTO_H

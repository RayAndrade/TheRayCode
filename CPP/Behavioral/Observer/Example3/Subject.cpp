//
// Created by ray on 3/9/24.
//

#include "Subject.h"

void Monster::attach(Observer* observer) {
    observers.push_back(observer);
}

void Monster::detach(Observer* observer) {
    observers.remove(observer);
}

void Monster::notify() {
    for (Observer* observer : observers) {
        observer->update(message);
    }
}

void Monster::createMessage(std::string message) {
    this->message = message;
    notify();
}

void Monster::howl() {
    createMessage("The monster has howled!");
}
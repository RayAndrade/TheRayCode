//
// Created by ray on 3/9/24.
//

#ifndef EXAMPLE_SUBJECT_H
#define EXAMPLE_SUBJECT_H

#include <list>
#include "Observer.h"

class Subject {
private:
    std::list<Observer*> observers; // List of pointers to Observer objects
public:
    virtual ~Subject() {}

    void attach(Observer* observer) {
        observers.push_back(observer);
    }

    void detach(Observer* observer) {
        observers.remove(observer);
    }

    void notify(int state) {
        for (Observer* observer : observers) {
            observer->update(state);
        }
    }
};

#endif //EXAMPLE_SUBJECT_H

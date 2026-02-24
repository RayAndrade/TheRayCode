//
// Created by ray on 3/9/24.
//

#ifndef EXAMPLE3_SUBJECT_H
#define EXAMPLE3_SUBJECT_H

#include <list>
//#include <string>
#include "Observer.h"

class Subject {
public:
    virtual ~Subject() = default;
    virtual void attach(Observer* observer) = 0;
    virtual void detach(Observer* observer) = 0;
    virtual void notify() = 0;
};

class Monster : public Subject {
private:
    std::list<Observer*> observers;
    std::string message;

public:
    void attach(Observer* observer) override;
    void detach(Observer* observer) override;
    void notify() override;
    void createMessage(std::string message = "Default");
    void howl();
};

#endif //EXAMPLE3_SUBJECT_H

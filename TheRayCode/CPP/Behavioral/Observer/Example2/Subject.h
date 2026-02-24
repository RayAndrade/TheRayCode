//
// Created by ray on 3/9/24.
//

#ifndef EXAMPLE2_SUBJECT_H
#define EXAMPLE2_SUBJECT_H

#include <vector>
#include <memory>

class Observer;

class Subject {
public:
    virtual ~Subject() {}
    virtual void attach(std::shared_ptr<Observer> observer) = 0;
    virtual void detach(std::shared_ptr<Observer> observer) = 0;
    virtual void notify() = 0;
};

#endif //EXAMPLE2_SUBJECT_H

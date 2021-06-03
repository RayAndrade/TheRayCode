#ifndef OBSERVER_ISUBJECT_H
#define OBSERVER_ISUBJECT_H
#include "IObserver.h"

class ISubject {
public:
    virtual ~ISubject(){};
    virtual void Attach(IObserver *observer) = 0;
    virtual void Detach(IObserver *observer) = 0;
    virtual void Notify() = 0;
};

#endif //OBSERVER_ISUBJECT_H

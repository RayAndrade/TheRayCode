#ifndef OBSERVER_SUBJECT_H
#define OBSERVER_SUBJECT_H

#include "ISubject.h"

/**
 * The Subject owns some important state and notifies observers when the state
 * changes.
 */


class Subject : public ISubject {
public:
    virtual ~Subject() {
        std::cout << "Goodbye, I was the Subject.\n";
    }

    /**
     * The subscription management methods.
     */
    void Attach(IObserver *observer) override {
        list_observer_.push_back(observer);
    }
    void Detach(IObserver *observer) override {
        list_observer_.remove(observer);
    }
    void Notify() override {
        std::list<IObserver *>::iterator iterator = list_observer_.begin();
        HowManyObserver();
        while (iterator != list_observer_.end()) {
            (*iterator)->Update(message_);
            ++iterator;
        }
    }

    void CreateMessage(std::string message = "Empty") {
        this->message_ = message;
        Notify();
    }
    void HowManyObserver() {
        std::cout << "There are " << list_observer_.size() << " observers in the list.\n";
    }

    /**
     * Usually, the subscription logic is only a fraction of what a Subject can
     * really do. Subjects commonly hold some important business logic, that
     * triggers a notification method whenever something important is about to
     * happen (or after it).
     */
    void SomeBusinessLogic() {
        this->message_ = "change message message";
        Notify();
        std::cout << "I'm about to do some thing important\n";
    }

private:
    std::list<IObserver *> list_observer_;
    std::string message_;
};

#endif //OBSERVER_SUBJECT_H

#ifndef OBSERVER_IOBSERVER_H
#define OBSERVER_IOBSERVER_H

/**
 * Observer Design Pattern
 *
 * Intent: Lets you define a subscription mechanism to notify multiple objects
 * about any events that happen to the object they're observing.
 *
 * Note that there's a lot of different terms with similar meaning associated
 * with this pattern. Just remember that the Subject is also called the
 * Publisher and the Observer is often called the Subscriber and vice versa.
 * Also the verbs "observe", "listen" or "track" usually mean the same thing.
 */

class IObserver {
public:
    virtual ~IObserver(){};
    virtual void Update(const std::string &message_from_subject) = 0;
};

#endif //OBSERVER_IOBSERVER_H

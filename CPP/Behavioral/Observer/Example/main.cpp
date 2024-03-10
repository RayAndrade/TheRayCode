#include "Subject.h"
#include "ConcreteObserver.h"

int main() {
    Subject subject;

    ConcreteObserver observer1;
    ConcreteObserver observer2;

    subject.attach(&observer1);
    subject.attach(&observer2);

    subject.notify(10); // Notify all observers of state change
    return 0;
}

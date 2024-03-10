[up](../README.md)

To implement the Observer design pattern in C++ as described in the "Design Patterns: Elements of Reusable Object-Oriented Software" by the Gang of Four (GoF), we'll create a simple example that consists of a Subject class that maintains a list of observers and notifies them of state changes, an Observer base class from which concrete observers can inherit, and concrete Observer classes that react to notifications from the Subject.

This pattern is used when there is a one-to-many relationship between objects, such as when one object's state changes and other dependent objects must be notified.

### Step 1: Define the Observer Base Class (`Observer.h`)

```cpp
// Observer.h
#ifndef OBSERVER_H
#define OBSERVER_H

class Observer {
public:
    virtual ~Observer() {}
    virtual void update(int state) = 0;
};

#endif // OBSERVER_H
```

This is an abstract class that defines a pure virtual `update` method, which concrete observers must implement. The `update` method is called to notify the observers of a change in the subject's state.

### Step 2: Define the Subject Class (`Subject.h`)

```cpp
// Subject.h
#ifndef SUBJECT_H
#define SUBJECT_H

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

#endif // SUBJECT_H
```

The `Subject` class maintains a list of observers and provides methods to add (`attach`) or remove (`detach`) observers. The `notify` method is called to update all registered observers when the Subject's state changes.

### Step 3: Define a Concrete Observer Class (`ConcreteObserver.h`)

```cpp
// ConcreteObserver.h
#ifndef CONCRETE_OBSERVER_H
#define CONCRETE_OBSERVER_H

#include <iostream>
#include "Observer.h"

class ConcreteObserver : public Observer {
private:
    int observerState;
public:
    void update(int state) override {
        observerState = state;
        std::cout << "Observer State updated to: " << observerState << std::endl;
    }
};

#endif // CONCRETE_OBSERVER_H
```

This concrete observer class inherits from `Observer` and implements the `update` method. It simply updates its internal state and prints a message to the console.

### Step 4: Demo in `main.cpp`

```cpp
// main.cpp
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
```

When you run this program, it should output something like:

```
Observer State updated to: 10
Observer State updated to: 10
```

This demonstrates that both observers (`observer1` and `observer2`) receive and react to the notification from the `Subject` that a state change occurred.

### Development Order

1. **Observer.h**: Start with the `Observer` base class since it defines the interface that all observers must implement.
2. **Subject.h**: Next, define the `Subject` class because it uses `Observer` pointers to notify them about state changes.
3. **ConcreteObserver.h**: After the `Observer` interface and `Subject` class, define the `ConcreteObserver` classes that implement the observer behavior.
4. **main.cpp**: Finally, use `main.cpp` to demonstrate the interaction between the subject and its observers.

By following this order, you ensure that all dependencies are correctly established before they are used, which is a common practice in C++ development to manage dependencies and compilation errors effectively.

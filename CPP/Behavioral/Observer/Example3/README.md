[up](../README.md)

For this explanation, we'll create a simple Observer design pattern example in C++ using a monster theme. The Observer pattern is a software design pattern in which an object, named the subject, maintains a list of its dependents, called observers, and notifies them of any state changes, usually by calling one of their methods. It's a foundational pattern for event-driven systems.

### Theme Overview

Our demonstration involves a `Monster` class (Subject) and multiple observer classes (`Hunter` and `Villager`) that react to changes in the monster's state (e.g., when it wakes up or moves).

### Class Structure

- **Subject (Monster)**: The class that holds the state and notifies observers about its changes.
- **Observer Interface**: An interface implemented by all observers (`Hunter`, `Villager`).
- **Concrete Observers (`Hunter`, `Villager`)**: Classes that react to the state changes of `Monster`.

### Step-by-Step Implementation

#### 1. Observer.h (Observer Interface)

```cpp
#ifndef OBSERVER_H
#define OBSERVER_H

class Observer {
public:
    virtual ~Observer() = default;
    virtual void update(const std::string& message_from_subject) = 0;
};

#endif // OBSERVER_H
```

#### 2. Subject.h (Monster Class)

```cpp
#ifndef SUBJECT_H
#define SUBJECT_H

#include <list>
#include <string>
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

#endif // SUBJECT_H
```

#### 3. ConcreteObservers.h (Hunter and Villager Classes)

```cpp
#ifndef CONCRETEOBSERVERS_H
#define CONCRETEOBSERVERS_H

#include "Observer.h"
#include <iostream>
#include <string>

class Hunter : public Observer {
public:
    void update(const std::string& message_from_subject) override {
        std::cout << "Hunter sees the monster: " << message_from_subject << std::endl;
    }
};

class Villager : public Observer {
public:
    void update(const std::string& message_from_subject) override {
        std::cout << "Villager hears the monster: " << message_from_subject << std::endl;
    }
};

#endif // CONCRETEOBSERVERS_H
```

#### 4. Subject.cpp (Monster Implementation)

```cpp
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
```

#### 5. main.cpp (Demonstration)

```cpp
#include "Subject.h"
#include "ConcreteObservers.h"

int main() {
    Monster monster;

    Hunter hunter;
    Villager villager;

    monster.attach(&hunter);
    monster.attach(&villager);

    monster.howl(); // Both Hunter and Villager will react to this event.

    return 0;
}
```

### Order of Creation

1. Create the Observer interface (`Observer.h`).
2. Create the Subject abstract class and its concrete implementation (`Monster` in `Subject.h`).
3. Implement concrete observers (`Hunter` and `Villager` in `ConcreteObservers.h`).
4. Implement the `Monster` class methods (`Subject.cpp`).
5. Create the main demonstration (`main.cpp`).

### Expected Output

When you run `main.cpp`, the `Monster` class will notify its observers (`Hunter` and `Villager`) about the howl event. You should see output similar to:

```
Hunter sees the monster: The monster has howled!
Villager hears the monster: The monster has howled!
```

This simple scenario demonstrates the Observer pattern in a fun and understandable context, highlighting the dynamic between the monster (subject) and its observers.

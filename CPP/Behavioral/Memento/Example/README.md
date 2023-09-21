The Memento design pattern is used to restore the state of an object to a previous state, kind of like an undo function. It's achieved by saving the state of an object in another object.

Here's a breakdown of the classes and their order of creation:

1. **Memento**: This class stores the internal state of the `Originator` class. It should prevent any other object from changing its state.
   
2. **Originator**: This class creates a memento containing a snapshot of its current internal state. It can also restore its internal state from a memento.

3. **Caretaker**: It's responsible for the memento's safekeeping. It maintains a history of states but doesn't modify the memento.

Let's dive into the code:

1. **Memento.h**
```cpp
// Memento.h
#pragma once

#include <string>

class Memento {
    friend class Originator;

private:
    std::string state;

    explicit Memento(const std::string &s) : state(s) {}
    void setState(const std::string &s) { state = s; }
    std::string getState() const { return state; }
};
```

2. **Originator.h**
```cpp
// Originator.h
#pragma once

#include "Memento.h"
#include <iostream>

class Originator {
private:
    std::string state;

public:
    void setState(const std::string &s) { state = s; }
    std::string getState() const { return state; }

    Memento saveToMemento() {
        return Memento(state);
    }

    void restoreFromMemento(const Memento &m) {
        state = m.getState();
    }
};
```

3. **Caretaker.h**
```cpp
// Caretaker.h
#pragma once

#include "Memento.h"
#include <vector>

class Caretaker {
private:
    std::vector<Memento> mementoList;

public:
    void add(const Memento &m) {
        mementoList.push_back(m);
    }

    Memento get(int index) {
        if (index < 0 || index >= mementoList.size()) {
            throw std::out_of_range("Index out of bounds");
        }
        return mementoList[index];
    }
};
```

4. **main.cpp** - Demonstrating the use of the pattern.
```cpp
// main.cpp
#include "Originator.h"
#include "Caretaker.h"
#include <iostream>

int main() {
    Originator originator;
    Caretaker caretaker;

    originator.setState("State1");
    caretaker.add(originator.saveToMemento());

    originator.setState("State2");
    caretaker.add(originator.saveToMemento());

    originator.setState("State3");

    std::cout << "Current State: " << originator.getState() << std::endl;

    originator.restoreFromMemento(caretaker.get(0));
    std::cout << "First saved State: " << originator.getState() << std::endl;

    originator.restoreFromMemento(caretaker.get(1));
    std::cout << "Second saved State: " << originator.getState() << std::endl;

    return 0;
}
```

When you run `main.cpp`, you should see the state of the `Originator` object change and then be restored using the saved mementos.

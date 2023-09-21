[up](../README.md)

Certainly! The Memento design pattern allows for the ability to restore an object to its previous state, which can be useful for "undo" functionalities. Here's a simple implementation in C++ for this pattern:

**Order of Creation:**
1. `Memento.h`: This class will store the state of the `Originator`.
2. `Originator.h`: This class creates the memento and also restores its state from it.
3. `Caretaker.h`: Responsible for keeping track of multiple states (stored in mementos). 
4. `main.cpp`: Demonstrates the functionality.

**1. Memento.h:**

```cpp
// Memento.h
#ifndef MEMENTO_H
#define MEMENTO_H

#include <string>

class Memento {
private:
    std::string state;

public:
    Memento(const std::string &s) : state(s) {}

    std::string getState() const {
        return state;
    }
};

#endif // MEMENTO_H
```

**2. Originator.h:**

```cpp
// Originator.h
#ifndef ORIGINATOR_H
#define ORIGINATOR_H

#include "Memento.h"
#include <string>

class Originator {
private:
    std::string state;

public:
    void set(const std::string &s) {
        state = s;
        std::cout << "Originator: Setting state to " << s << std::endl;
    }

    Memento saveToMemento() {
        std::cout << "Originator: Saving to Memento." << std::endl;
        return Memento(state);
    }

    void restoreFromMemento(const Memento &m) {
        state = m.getState();
        std::cout << "Originator: State after restoring from Memento: " << state << std::endl;
    }
};

#endif // ORIGINATOR_H
```

**3. Caretaker.h:**

```cpp
// Caretaker.h
#ifndef CARETAKER_H
#define CARETAKER_H

#include "Memento.h"
#include <vector>

class Caretaker {
private:
    std::vector<Memento> mementos;

public:
    void addMemento(const Memento &m) {
        mementos.push_back(m);
    }

    Memento getMemento(int index) {
        return mementos[index];
    }
};

#endif // CARETAKER_H
```

**4. main.cpp:**

```cpp
// main.cpp
#include <iostream>
#include "Originator.h"
#include "Caretaker.h"

int main() {
    Originator originator;
    Caretaker caretaker;

    originator.set("State1");
    caretaker.addMemento(originator.saveToMemento());

    originator.set("State2");
    caretaker.addMemento(originator.saveToMemento());

    originator.set("State3");
    caretaker.addMemento(originator.saveToMemento());

    // Restore to previous states
    originator.restoreFromMemento(caretaker.getMemento(1)); // Should restore to State2
    originator.restoreFromMemento(caretaker.getMemento(0)); // Should restore to State1

    return 0;
}
```

**Explanations:**

1. **Memento**:
   - Holds the state of the `Originator`. It's like a snapshot of a particular state.

2. **Originator**:
   - `set`: Sets the state.
   - `saveToMemento`: Saves the current state to a memento.
   - `restoreFromMemento`: Restores the state from a given memento.

3. **Caretaker**:
   - Holds a list of mementos. It's like a history of states.
   - `addMemento`: Saves a new state.
   - `getMemento`: Fetches a specific state from the history.

4. **main.cpp**:
   - Demonstrates setting different states, saving them as mementos, and then restoring previous states using those mementos.

Compile and run `main.cpp`, and you should see how the `Originator` changes its state and how it can revert to a previous state using the mementos managed by the `Caretaker`.

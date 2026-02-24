[up](../README.md)

To demonstrate the State design pattern in C++ as described in "Design Patterns: Elements of Reusable Object-Oriented Software" by the Gang of Four, let's create a simplified example. The State pattern allows an object to alter its behavior when its internal state changes. It does this by changing the current "state" object it points to. This pattern is useful for objects that need to change their behavior depending on their internal state without cluttering the code with conditional statements.

### Project Structure

1. **Context Class**: Holds an instance of a ConcreteState subclass that defines the current state.
2. **State Base Class**: An abstract class that defines an interface for encapsulating the behavior associated with a particular state of the Context.
3. **ConcreteState Classes**: Subclasses of the State class that implement specific behaviors associated with a state.

### Class Definitions

#### State.h
```cpp
#ifndef STATE_H
#define STATE_H

class Context; // Forward declaration

class State {
public:
    virtual ~State() {}
    virtual void handle(Context* context) = 0;
};

#endif // STATE_H
```
This is an abstract class representing the state of the object. It includes a pure virtual function `handle()` that the concrete states will implement.

#### ConcreteStateA.h
```cpp
#ifndef CONCRETESTATEA_H
#define CONCRETESTATEA_H

#include "State.h"

class ConcreteStateA : public State {
public:
    void handle(Context* context) override;
};

#endif // CONCRETESTATEA_H
```
This class represents a concrete state. It implements the `handle()` method by performing state-specific behaviors and possibly transitioning the context to another state.

#### ConcreteStateB.h
```cpp
#ifndef CONCRETESTATEB_H
#define CONCRETESTATEB_H

#include "State.h"

class ConcreteStateB : public State {
public:
    void handle(Context* context) override;
};

#endif // CONCRETESTATEB_H
```
Similar to `ConcreteStateA`, this class provides its own implementation of the `handle()` method, encapsulating the behavior specific to this state.

#### Context.h
```cpp
#ifndef CONTEXT_H
#define CONTEXT_H

#include "State.h"

class Context {
private:
    State* state;
public:
    Context(State* state) : state(state) {}
    ~Context() { delete state; }
    void setState(State* state);
    void request();
};

#endif // CONTEXT_H
```
This class maintains an instance of a ConcreteState subclass that reflects its current state, and delegates state-specific behavior to the current state object.

### Implementation

Now, let's implement the behavior of each class.

#### Context.cpp
```cpp
#include "Context.h"

void Context::setState(State* newState) {
    delete state;
    state = newState;
}

void Context::request() {
    state->handle(this);
}
```

#### ConcreteStateA.cpp and ConcreteStateB.cpp
```cpp
#include "ConcreteStateA.h"
#include "ConcreteStateB.h"
#include "Context.h"
#include <iostream>

void ConcreteStateA::handle(Context* context) {
    std::cout << "State A handling context. Switching to State B." << std::endl;
    context->setState(new ConcreteStateB());
}

void ConcreteStateB::handle(Context* context) {
    std::cout << "State B handling context. Switching to State A." << std::endl;
    context->setState(new ConcreteStateA());
}
```

### Main.cpp
```cpp
#include "Context.h"
#include "ConcreteStateA.h"

int main() {
    State* initialState = new ConcreteStateA();
    Context* context = new Context(initialState);

    context->request(); // Switches to State B
    context->request(); // Switches back to State A

    delete context;
    return 0;
}
```
This `main.cpp` demonstrates the use of the State pattern. It creates a `Context` object with an initial `ConcreteStateA`, then calls `request()` twice, which triggers the state changes between `ConcreteStateA` and `ConcreteStateB`.

### Running the Code
When you compile and run this program, you should see output indicating the transitions between State A and State B:

```
State A handling context. Switching to State B.
State B handling context. Switching to State A.
```

### Development Order
1. Define the `State` base class (State.h).
2. Define the `Context` class (Context.h and Context.cpp) that will use the State instances.
3. Implement the `ConcreteState` classes (ConcreteStateA.h, ConcreteStateA.cpp, ConcreteStateB.h, and ConcreteStateB.cpp).
4. Finally, demonstrate the pattern in `main.cpp`.

This order ensures that each piece is defined before it's used, which is a logical approach to developing software with interdependent classes.

[up](../README.md) [script](script/page01.md)

Creating a C++ example using the Decorator Design Pattern involves several steps. This design pattern is used to add new functionalities to objects dynamically without altering their structure. Here's how you can structure your C++ project using this pattern:

### Project Structure
1. **Component.h** - Abstract base class declaring the common interface.
2. **ConcreteComponent.h** - Class implementing the `Component` interface.
3. **Decorator.h** - Abstract class inheriting from `Component`, used as a base for concrete decorators.
4. **ConcreteDecoratorA.h**, **ConcreteDecoratorB.h**, etc. - Concrete classes extending `Decorator` with additional functionalities.
5. **main.cpp** - The main program to demonstrate the usage.

### Explanation of Each File

#### Component.h
```cpp
// Component.h
#ifndef COMPONENT_H
#define COMPONENT_H

// Abstract base class representing the primary interface
class Component {
public:
    virtual ~Component() {}
    virtual void operation() = 0;
};

#endif
```

#### ConcreteComponent.h
```cpp
// ConcreteComponent.h
#ifndef CONCRETECOMPONENT_H
#define CONCRETECOMPONENT_H

#include "Component.h"
#include <iostream>

// Concrete implementation of Component
class ConcreteComponent : public Component {
public:
    void operation() override {
        std::cout << "Basic functionality.\n";
    }
};

#endif
```

#### Decorator.h
```cpp
// Decorator.h
#ifndef DECORATOR_H
#define DECORATOR_H

#include "Component.h"

// Base decorator class
class Decorator : public Component {
protected:
    Component* component;

public:
    Decorator(Component* c) : component(c) {}
    void operation() override {
        if (component)
            component->operation();
    }
};

#endif
```

#### ConcreteDecoratorA.h
```cpp
// ConcreteDecoratorA.h
#ifndef CONCRETEDECORATORA_H
#define CONCRETEDECORATORA_H

#include "Decorator.h"
#include <iostream>

// A concrete decorator adding extra features
class ConcreteDecoratorA : public Decorator {
public:
    ConcreteDecoratorA(Component* c) : Decorator(c) {}

    void operation() override {
        Decorator::operation();
        addedBehavior();
    }

private:
    void addedBehavior() {
        std::cout << "Added behavior A.\n";
    }
};

#endif
```

#### main.cpp
```cpp
// main.cpp
#include "ConcreteComponent.h"
#include "ConcreteDecoratorA.h"

int main() {
    Component* simple = new ConcreteComponent();
    Component* decorated = new ConcreteDecoratorA(simple);

    std::cout << "Running basic component:\n";
    simple->operation();

    std::cout << "\nRunning decorated component:\n";
    decorated->operation();

    delete simple;
    delete decorated;
    return 0;
}
```

### Order of Creation
1. **Component.h**: Define the base interface.
2. **ConcreteComponent.h**: Implement the basic functionality.
3. **Decorator.h**: Create the base decorator.
4. **ConcreteDecoratorA.h**: Add specific functionalities.
5. **main.cpp**: Demonstrate the pattern.

### Expected Output in Terminal
When you run `main.cpp`, you should see the following output:
```
Running basic component:
Basic functionality.

Running decorated component:
Basic functionality.
Added behavior A.
```

This project demonstrates the Decorator Pattern in C++ where `ConcreteDecoratorA` adds additional behavior to `ConcreteComponent` dynamically.

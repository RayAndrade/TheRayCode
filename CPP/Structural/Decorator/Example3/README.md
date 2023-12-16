[up](../README.md)

Certainly! I'll guide you through a C++ example of the Decorator Design Pattern, which is a structural design pattern. This pattern allows behavior to be added to individual objects, either statically or dynamically, without affecting the behavior of other objects from the same class.

We'll create a simple example with a `Component` interface, a `ConcreteComponent` class, and a `Decorator` class. Each class will be in its own header file. I'll also provide a `main.cpp` file to demonstrate usage. Let's break it down:

### 1. Component Interface: Component.h
```cpp
// Component.h
#ifndef COMPONENT_H
#define COMPONENT_H

#include <string>

class Component {
public:
    virtual ~Component() {}
    virtual std::string operation() const = 0;
};

#endif // COMPONENT_H
```
**Explanation:** 
- `Component`: An abstract base class (interface) that defines an interface for objects that can have responsibilities added to them dynamically.

### 2. Concrete Component: ConcreteComponent.h
```cpp
// ConcreteComponent.h
#ifndef CONCRETECOMPONENT_H
#define CONCRETECOMPONENT_H

#include "Component.h"

class ConcreteComponent : public Component {
public:
    std::string operation() const override {
        return "ConcreteComponent";
    }
};

#endif // CONCRETECOMPONENT_H
```
**Explanation:** 
- `ConcreteComponent`: A class that implements the `Component` interface. It's the basic object to which additional responsibilities can be attached.

### 3. Decorator: Decorator.h
```cpp
// Decorator.h
#ifndef DECORATOR_H
#define DECORATOR_H

#include "Component.h"
#include <memory>

class Decorator : public Component {
protected:
    std::shared_ptr<Component> component;
public:
    Decorator(std::shared_ptr<Component> c) : component(c) {}

    std::string operation() const override {
        return component->operation();
    }
};

#endif // DECORATOR_H
```
**Explanation:** 
- `Decorator`: A class that 'wraps' a `Component` object, thereby providing a means to add responsibilities to individual objects dynamically.

### 4. Concrete Decorators: (Optional, if you want to extend functionality)
You can create classes like `ConcreteDecoratorA` and `ConcreteDecoratorB` that extend `Decorator` and add additional behavior.

### 5. main.cpp
```cpp
// main.cpp
#include <iostream>
#include "ConcreteComponent.h"
#include "Decorator.h"

int main() {
    std::shared_ptr<Component> component = std::make_shared<ConcreteComponent>();
    std::shared_ptr<Component> decoratedComponent = std::make_shared<Decorator>(component);

    std::cout << "Result: " << decoratedComponent->operation() << std::endl;
    
    return 0;
}
```
**Explanation:** 
- `main.cpp`: Demonstrates the usage of the Decorator pattern. It creates a `ConcreteComponent` and then decorates it using the `Decorator`.

### Order of Creation
1. **Component Interface**: Start with the `Component` interface as it defines the common interface for concrete components and decorators.
2. **Concrete Component**: Next, implement the `ConcreteComponent` class.
3. **Decorator**: Then, create the `Decorator` class, which needs the `Component` interface.
4. **Concrete Decorators**: Optionally, implement any concrete decorators.
5. **Main Function**: Finally, write the `main.cpp` to demonstrate the usage.

### Expected Output
When you run the code, you should see:
```
Result: ConcreteComponent
```

This indicates that the `ConcreteComponent` has been successfully wrapped by the `Decorator`, and its operation is being invoked.

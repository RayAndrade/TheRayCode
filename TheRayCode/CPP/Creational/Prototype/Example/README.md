[up](../README.md)

The Prototype design pattern is a creational pattern used in software development when the type of objects to create is determined by a prototypical instance, which is cloned to produce new objects. This pattern is particularly useful when the cost of creating an object is more expensive or complex than copying an existing instance.

Let's break down a C++ implementation of the Prototype pattern:

### 1. Prototype Interface (Prototype.h)

This is an abstract class defining the interface for cloning itself. It typically contains a `clone()` method.

```cpp
// Prototype.h
#ifndef PROTOTYPE_H
#define PROTOTYPE_H

class Prototype {
public:
    virtual ~Prototype() {}
    virtual Prototype* clone() const = 0;
};

#endif // PROTOTYPE_H
```

### 2. Concrete Prototype (ConcretePrototype.h)

This class implements the Prototype interface and defines the concrete object that will be cloned.

```cpp
// ConcretePrototype.h
#ifndef CONCRETEPROTOTYPE_H
#define CONCRETEPROTOTYPE_H

#include "Prototype.h"
#include <string>

class ConcretePrototype : public Prototype {
private:
    std::string data;

public:
    ConcretePrototype(std::string data) : data(data) {}
    ConcretePrototype(const ConcretePrototype& other) : data(other.data) {}
    Prototype* clone() const override {
        return new ConcretePrototype(*this);
    }

    std::string getData() const {
        return data;
    }
};

#endif // CONCRETEPROTOTYPE_H
```

### 3. Main Application (main.cpp)

This is where you demonstrate the use of the Prototype pattern.

```cpp
// main.cpp
#include <iostream>
#include "ConcretePrototype.h"

int main() {
    ConcretePrototype* prototype = new ConcretePrototype("Example");
    ConcretePrototype* clonedPrototype = dynamic_cast<ConcretePrototype*>(prototype->clone());

    std::cout << "Original object data: " << prototype->getData() << std::endl;
    std::cout << "Cloned object data: " << clonedPrototype->getData() << std::endl;

    delete prototype;
    delete clonedPrototype;

    return 0;
}
```

### Class Explanation

- **Prototype.h**: This abstract class has a pure virtual `clone()` method, which is overridden by concrete implementations. It's the core of the Prototype pattern.
  
- **ConcretePrototype.h**: Inherits from `Prototype` and implements the `clone()` method. It contains specific data that will be cloned.

- **main.cpp**: Creates an instance of `ConcretePrototype`, clones it, and then displays the data of both the original and cloned instances.

### Order of Class Creation

1. **Prototype Interface**: Start by defining the abstract base class (Prototype.h) to establish the cloning interface.
2. **Concrete Prototype**: Implement the concrete class (ConcretePrototype.h) that will be cloned.
3. **Main Application**: Finally, use the main.cpp to demonstrate the pattern.

### Output Upon Running the Code

When you run the code, you should see output like this:

```
Original object data: Example
Cloned object data: Example
```

This output demonstrates that the original object and its clone contain the same data, proving that the Prototype pattern successfully created a copy of the original object.

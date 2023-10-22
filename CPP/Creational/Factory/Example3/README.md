[up](../README.md)

Creating a C++ project with the Factory design pattern involves several components. In this example, we're going to create a simple dessert factory that can produce different types of desserts. I'll guide you through the process, explaining each class, its responsibilities, variables, and methods. We'll create a project structure with separate header files for each class and a main.cpp for the application entry point.

Project structure:
1. Dessert.h
2. Cake.h
3. IceCream.h
4. DessertFactory.h
5. main.cpp

Note: In a real-world scenario, it's good practice to also have corresponding .cpp files for each .h to separate the interface from the implementation. However, for brevity, we'll include the implementations in the .h files in this example.

First, let's start with the base product class:

**Dessert.h**
```cpp
// Dessert.h
#ifndef DESSERT_H
#define DESSERT_H

#include <string>

// Abstract base class representing a general dessert
class Dessert {
public:
    virtual ~Dessert() {}
    virtual std::string getName() const = 0; // Retrieve the dessert name
    virtual void prepare() = 0; // Prepare the dessert, details depend on the dessert type
};

#endif //DESSERT_H
```

**Dessert.h** explains an abstract base 'Dessert' class with pure virtual methods, meaning it can't be instantiated on its own.

Next, let's create some specific dessert types.

**Cake.h**
```cpp
// Cake.h
#ifndef CAKE_H
#define CAKE_H

#include "Dessert.h"

// Concrete class representing a specific dessert
class Cake : public Dessert {
public:
    std::string getName() const override {
        return "Cake";
    }

    void prepare() override {
        // Here, add preparation steps specific to cake
        std::cout << "Preparing a cake..." << std::endl;
    }
};

#endif //CAKE_H
```

**IceCream.h**
```cpp
// IceCream.h
#ifndef ICECREAM_H
#define ICECREAM_H

#include "Dessert.h"

// Concrete class representing a specific dessert
class IceCream : public Dessert {
public:
    std::string getName() const override {
        return "Ice Cream";
    }

    void prepare() override {
        // Here, add preparation steps specific to ice cream
        std::cout << "Preparing ice cream..." << std::endl;
    }
};

#endif //ICECREAM_H
```

**Cake.h** and **IceCream.h** define concrete classes that inherit from 'Dessert' and implement its virtual functions.

Now, let's create the factory that produces these desserts.

**DessertFactory.h**
```cpp
// DessertFactory.h
#ifndef DESSERTFACTORY_H
#define DESSERTFACTORY_H

#include "Cake.h"
#include "IceCream.h"
#include <memory>
#include <stdexcept>

// The Factory class, which is responsible for creating dessert objects
class DessertFactory {
public:
    // Use enum for robust code and avoid hard-coded strings
    enum DessertType {
        CakeType,
        IceCreamType
    };

    // The factory method for creating desserts
    static std::unique_ptr<Dessert> createDessert(DessertType type) {
        switch (type) {
            case CakeType: 
                return std::make_unique<Cake>();
            case IceCreamType:
                return std::make_unique<IceCream>();
            default:
                throw std::invalid_argument("Unknown dessert type!");
        }
    }
};

#endif //DESSERTFACTORY_H
```

**DessertFactory.h** includes a factory method 'createDessert' that returns a smart pointer to a 'Dessert' object, providing memory safety without the need to manually delete the object.

Finally, we create the main application file:

**main.cpp**
```cpp
// main.cpp
#include <iostream>
#include "DessertFactory.h"

int main() {
    // Create different dessert types using the factory
    auto cake = DessertFactory::createDessert(DessertFactory::CakeType);
    auto iceCream = DessertFactory::createDessert(DessertFactory::IceCreamType);

    // Prepare the desserts
    cake->prepare();
    iceCream->prepare();

    // Output the dessert names
    std::cout << "Created: " << cake->getName() << std::endl;
    std::cout << "Created: " << iceCream->getName() << std::endl;

    return 0;
}
```

In **main.cpp**, we use `DessertFactory` to create instances of different desserts and then interact with these instances.

When you run this code, you should see:
```
Preparing a cake...
Preparing ice cream...
Created: Cake
Created: Ice Cream
```

This output indicates that the different 'Dessert' objects have been successfully created and their 'prepare' methods have been called.

The Factory design pattern allows for the creation of objects without specifying the exact class of object that will be created. This is done by creating objects by calling a factory method—either specified in an interface and implemented by child classes, or implemented in a base class and optionally overridden by derived classes—rather than by calling a constructor.

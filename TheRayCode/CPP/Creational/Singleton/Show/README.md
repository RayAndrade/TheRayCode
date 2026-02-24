[up](../README.md)

Let's use the Singleton design pattern to design a class called "OnlyOne". 
The name is witty in the sense that it emphasizes the main characteristic of the Singleton, that there can only be one instance of the class.

Here is the .h file:

```cpp
// OnlyOne.h
#ifndef ONLY_ONE_H
#define ONLY_ONE_H

class OnlyOne {
public:
    // Deleting the copy constructor and the assignment operator to prevent copies.
    OnlyOne(const OnlyOne&) = delete;
    OnlyOne& operator=(const OnlyOne&) = delete;

    // Static method that controls access to the singleton instance.
    static OnlyOne& getInstance() {
        static OnlyOne instance; // Guaranteed to be destroyed.
                                // Instantiated on first use.
        return instance;
    }

    // The rest of the class's interface here.
    void someMethod();

private:
    // Private constructor to prevent instancing.
    OnlyOne() {}
};

#endif // ONLY_ONE_H
```

This Singleton implementation is thread-safe and lazily initialized. It uses the "Meyers' Singleton" design, which is widely considered the most efficient and elegant way to create a Singleton in C++.

The "getInstance()" method returns a reference to the Singleton object, and the constructor is private so that users cannot directly create an `OnlyOne` object. Instead, they have to use the `getInstance()` method.

In the `getInstance()` method, we have a static `OnlyOne` instance that gets initialized the first time the method is called. This instance is then returned by reference. This design ensures that there's only one `OnlyOne` object throughout the program.

Here is an example usage:

```cpp
// main.cpp
#include "OnlyOne.h"

int main() {
    // Wrong: cannot directly instantiate an object.
    // OnlyOne obj;

    // Correct: getting the unique instance.
    OnlyOne& singletonObject = OnlyOne::getInstance();

    // Use the singleton object.
    singletonObject.someMethod();

    return 0;
}
```

As you can see, to use the Singleton, you have to call the `OnlyOne::getInstance()` method to get the Singleton object, and then you can call the other methods of the Singleton object as needed.

Now let's define the `someMethod()`:

```cpp
// OnlyOne.cpp
#include "OnlyOne.h"
#include <iostream>

void OnlyOne::someMethod() {
    std::cout << "Hello from OnlyOne!" << std::endl;
}
```

In this example, `someMethod()` simply prints a message to standard output, but in a real use case, it could be any operation that should be performed by the Singleton instance.

Sure, here's a comparison between a Singleton class and a non-Singleton class.

Let's use a class `Ordinary`, which is a non-Singleton class:

```cpp
// Ordinary.h
#ifndef ORDINARY_H
#define ORDINARY_H

class Ordinary {
public:
    Ordinary() {} 

    void someMethod();

};

#endif // ORDINARY_H
```

Here's how you might use it:

```cpp
// main.cpp
#include "Ordinary.h"

int main() {
    // You can create as many instances as you want.
    Ordinary firstOrdinaryObject;
    Ordinary secondOrdinaryObject;

    // Use the objects.
    firstOrdinaryObject.someMethod();
    secondOrdinaryObject.someMethod();

    return 0;
}
```

And the definition of `someMethod()` could be like this:

```cpp
// Ordinary.cpp
#include "Ordinary.h"
#include <iostream>

void Ordinary::someMethod() {
    std::cout << "Hello from Ordinary!" << std::endl;
}
```

The differences between a Singleton class and a non-Singleton class can be summed up as follows:

1. **Number of instances**: The main difference is the number of instances that can be created. For a Singleton class, only one instance can be created. This is controlled by making the constructor private and providing a public method to get the instance. For a non-Singleton class, any number of instances can be created.

2. **Global Access**: The Singleton object is globally accessible, meaning it can be accessed from anywhere in the code using the `getInstance()` method. This is not the case with non-Singleton objects, which have to be passed around as parameters if they need to be accessed in different scopes.

3. **Lifetime**: The Singleton object's lifetime extends for the duration of the program. It's created when first accessed and destroyed when the program ends. Non-Singleton objects have their lifetime managed by the scope they are created in.

4. **Use Cases**: Singleton classes are used for resources that need to be shared and coordinated. This includes loggers, configuration settings, hardware interfaces, etc. Non-Singleton classes are the norm and are used for everything else. The Singleton pattern is a specific solution for a specific set of problems, and its use is generally discouraged unless necessary, as it can introduce global state into an application, making the code harder to reason about and test.




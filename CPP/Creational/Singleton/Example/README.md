Here's a step-by-step explanation and implementation of the Singleton design pattern using C++.

[Script](script/page01.md)   [up](../README.md)

### 1. Singleton Class:
**Singleton.h:**

This class ensures that a class has only one instance and provides a global point of access to it.

```cpp
// Singleton.h

#ifndef SINGLETON_H
#define SINGLETON_H

class Singleton {
private:
    // Private Constructor to prevent external instantiation
    Singleton() {}

    // Declare a private static instance of the same class
    static Singleton* instance;

public:
    // Delete copy constructor and assignment operator to avoid duplication
    Singleton(const Singleton&) = delete;
    Singleton& operator=(const Singleton&) = delete;

    // Static method to access the unique Singleton instance
    static Singleton* getInstance();

    // Some business logic method
    void demoMethod();
};

#endif
```

**Singleton.cpp:**

Here, we implement the `getInstance()` method to ensure that only one instance is created. We also provide a simple method, `demoMethod()`, to demonstrate its functionality.

```cpp
// Singleton.cpp

#include "Singleton.h"
#include <iostream>

Singleton* Singleton::instance = nullptr;

Singleton* Singleton::getInstance() {
    if (instance == nullptr) {
        instance = new Singleton();
    }
    return instance;
}

void Singleton::demoMethod() {
    std::cout << "Singleton class method called!" << std::endl;
}
```

### 2. Demonstration:
**Demo.cpp:**

This will demonstrate the usage of the Singleton pattern. We will try to get the instance multiple times and will see that they all point to the same memory location.

```cpp
// Demo.cpp

#include "Singleton.h"
#include <iostream>

int main() {
    // Get Singleton instance
    Singleton* s1 = Singleton::getInstance();
    Singleton* s2 = Singleton::getInstance();
    
    std::cout << "Address of s1: " << s1 << std::endl;
    std::cout << "Address of s2: " << s2 << std::endl;

    // Demonstrate a method call
    s1->demoMethod();

    return 0;
}
```

When you run `Demo.cpp`, it will show that both `s1` and `s2` have the same address, proving that there's only one instance created. The `demoMethod` call will simply print a message to the console.

**Order of Creation and Explanation:**
1. **Singleton.h**: Define the Singleton class structure with private constructors, a private static instance, and public methods to get the instance and to perform some business logic.
2. **Singleton.cpp**: Implement the `getInstance` logic and the demo method.
3. **Demo.cpp**: Use the Singleton pattern to demonstrate that only one instance of the class is ever created.

To compile and run:

```bash
$ g++ Singleton.cpp Demo.cpp -o demo
$ ./demo
```

You should see the memory addresses of `s1` and `s2` being the same, indicating that the Singleton pattern is working correctly.

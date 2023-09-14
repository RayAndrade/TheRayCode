
### 1. OnlyOne Class:

**OnlyOne.h:**

```cpp
// OnlyOne.h

#ifndef ONLYONE_H
#define ONLYONE_H

class OnlyOne {
private:
    // Private Constructor to prevent external instantiation
    OnlyOne() {}

    // Declare a private static instance of the same class
    static OnlyOne* instance;

public:
    // Delete copy constructor and assignment operator to avoid duplication
    OnlyOne(const OnlyOne&) = delete;
    OnlyOne& operator=(const OnlyOne&) = delete;

    // Static method to access the unique OnlyOne instance
    static OnlyOne* getInstance();

    // Some business logic method
    void demoMethod();
};

#endif
```

**OnlyOne.cpp:**

```cpp
// OnlyOne.cpp

#include "OnlyOne.h"
#include <iostream>

OnlyOne* OnlyOne::instance = nullptr;

OnlyOne* OnlyOne::getInstance() {
    if (instance == nullptr) {
        instance = new OnlyOne();
    }
    return instance;
}

void OnlyOne::demoMethod() {
    std::cout << "OnlyOne class method called!" << std::endl;
}
```

### 2. Demonstration:

**Demo.cpp:**

```cpp
// Demo.cpp

#include "OnlyOne.h"
#include <iostream>

int main() {
    // Get OnlyOne instance
    OnlyOne* o1 = OnlyOne::getInstance();
    OnlyOne* o2 = OnlyOne::getInstance();
    
    std::cout << "Address of o1: " << o1 << std::endl;
    std::cout << "Address of o2: " << o2 << std::endl;

    // Demonstrate a method call
    o1->demoMethod();

    return 0;
}
```

When you run `Demo.cpp`, it will show that both `o1` and `o2` have the same address, proving that there's only one instance created of the `OnlyOne` class. The `demoMethod` call will print a message to the console.

To compile and run:

```bash
$ g++ OnlyOne.cpp Demo.cpp -o demo
$ ./demo
```

The output should demonstrate the Singleton pattern's behavior using the renamed `OnlyOne` class.

Here's an example of the **Singleton** pattern in C++ with each class in its own .h file. 

I'll also provide a **Demo** in the main method file named **Demo.cpp** to showcase its usage. 
I'll describe the utility of each file, explain when you would use the **Singleton** pattern, and demonstrate that a new **Singleton** instance does not create a new class by comparing the addresses. 
Finally, I'll show how a *non-Singleton* class creates a different instance by verifying the reference IDs.

Let's start with the .h files:

**Singleton.h:**

```
class Singleton {
private:
    static Singleton* instance;
    Singleton();  // Private constructor to prevent direct instantiation

public:
    static Singleton* getInstance();
    void someMethod();
};
```


In the **Singleton.h** file, we define the **Singleton** class. 
It has a private static member instance that holds the single instance of the class. 
The constructor is marked as private to prevent direct instantiation. We provide a static getInstance() method to retrieve the instance and a someMethod() for demonstration purposes.

**Singleton.cpp**

```
Singleton* Singleton::instance = nullptr;

Singleton::Singleton() {
    // Private constructor
}

Singleton* Singleton::getInstance() {
    if (instance == nullptr) {
        instance = new Singleton();
    }
    return instance;
}

void Singleton::someMethod() {
    // Implementation of the method
}
```

In the **Singleton.cpp** file, we define the implementation of the Singleton class. 
The getInstance() method checks if the instance is null and creates a new instance if it is. 
The someMethod() implementation can be any functionality you desire.

**Demo.cpp**

```
#include <iostream>
#include "Singleton.h"

int main() {
    Singleton* s1 = Singleton::getInstance();
    Singleton* s2 = Singleton::getInstance();

    std::cout << "Address of s1: " << s1 << std::endl;
    std::cout << "Address of s2: " << s2 << std::endl;

    Singleton s3;  // Error: Constructor is private

    return 0;
}
```
In the **Demo.cpp** file, we demonstrate the usage of the **Singleton** pattern. 
We create two instances **s1** and **s2** using the getInstance() method, and print their addresses to verify they are the same. 
We also attempt to create a new instance s3 using the constructor, but it results in a compilation error due to the private constructor.

To compile and run this example, you would need to compile **Singleton.cpp** and **Demo.cpp** together.

The **Singleton** pattern is used when you want to ensure that only one instance of a class exists throughout the lifetime of an application. It is useful in scenarios where having multiple instances of the class could lead to issues, such as sharing a common resource or maintaining a global state. The Singleton pattern provides a global point of access to the instance while preventing multiple instantiations.

In the Demo, you'll notice that the addresses of **s1** and **s2** are the same, confirming that they are references to the same Singleton instance. 
Attempting to create a new instance of Singleton using the constructor s3 will result in a compilation error, showcasing that the private constructor prevents direct instantiation.

```
Address of s1: 0x5644f7861eb0
Address of s2: 0x5644f7861eb0

```


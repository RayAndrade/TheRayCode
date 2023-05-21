# TheRayCode is AWESOME!!!

**[C++](../README.md)** 

**[Creational Patterns](../README.md)** | **[Structural Patterns](../../Structural/README.md)** | **[Behavioral Patterns](../../Behavioral/README.md)**

**C++ Creational Patterns**

 * **[Factory](../Factory/README.md)**
 * **[AbstractFactory](../AbstractFactory/README.md)**
 * **[Builder](../Builder/README.md)**
 * **[Prototype](../Prototype/README.md)**
 * **[Singleton](../Singleton/README.md)**

**C++ Singleton Design Pattern**

The Singleton design pattern ensures that a class has only one instance and provides a global point of access to it. Below is a basic example:



**Singleton.h:**
The Singleton class is defined in **Singleton.h**. It has a private constructor, which ensures that the class cannot be directly instantiated. The copy constructor and assignment operator are deleted to prevent copying.

```cpp
class Singleton {
public:
    // Delete copy constructor and assignment operator
    Singleton(Singleton &other) = delete;
    void operator=(const Singleton &) = delete;

    static Singleton* getInstance();

private:
    Singleton() {}

    static Singleton* instance;
};
```
Singleton.h: This is the header file for the Singleton class. In C++, it's common to declare classes in a header file so that they can be included in multiple source files. The Singleton class is declared here, and it includes a private constructor and a static method getInstance(). The constructor is private to ensure that no other class can create an instance of Singleton. The getInstance() method is the global point of access to the Singleton instance. The copy constructor and the assignment operator are also deleted in this class to prevent the creation of another instance through copying.

**Singleton.cpp:**

In the **Singleton.cpp** file, the instance is initialized to nullptr and the **getInstance()** function checks if instance is **nullptr**. If it is, it creates a new Singleton object and assigns it to instance. If it isn't nullptr, then it just returns the existing instance.


```cpp
#include "Singleton.h"

Singleton* Singleton::instance = 0;

Singleton* Singleton::getInstance() {
    if (instance == 0) {
        instance = new Singleton();
    }

    return instance;
}
```
Singleton.cpp: This is the implementation file for the Singleton class. It contains the definition of the getInstance() method and the initialization of the static member instance. The getInstance() method checks if instance is null (indicating that no Singleton instance exists). If instance is null, it creates a new Singleton object; if not, it returns the existing Singleton object. This ensures that only one Singleton object exists at any time.

**Demo.cpp**

In the **Demo.cpp** file, the main() function gets two instances of the Singleton class. It then prints out the memory addresses of these two instances. Since the Singleton pattern ensures that there's only one instance of the Singleton class, these two addresses should be the same.


```cpp
#include <iostream>
#include "Singleton.h"

int main() {
    Singleton* s = Singleton::getInstance();
    Singleton* r = Singleton::getInstance();

    std::cout << s << std::endl;
    std::cout << r << std::endl;

    return 0;
}
```
Demo.cpp: This is the file that contains the main() function and is responsible for demonstrating the Singleton pattern. It creates two pointers, s and r, each of which should point to the Singleton instance. It then prints the memory addresses stored in these pointers. Because the Singleton pattern guarantees that there is only one instance of the Singleton class, these memory addresses should be the same. This file includes the Singleton header file in order to access the Singleton class.

To summarize: Singleton.h and Singleton.cpp work together to implement a Singleton class that ensures only one instance of this class can exist at any given time. Demo.cpp is used to demonstrate this Singleton behavior.


Please note that this basic Singleton implementation is not thread-safe. If you are working in a multithreaded environment, you should use mechanisms such as std::call_once or double-checked locking to ensure that only one instance of the Singleton class is created.

[TheRayCode.ORG](https://www.TheRayCode.org)

[RayAndrade.COM](https://www.RayAndrade.com)

[Facebook](https://www.facebook.com/TheRayCode/) | [Twitter @TheRayCode](https://www.twitter.com/TheRayCode/) | [YouTube](https://www.youtube.com/TheRayCode/)

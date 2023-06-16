# [TheRayCode](../../../README.md) is AWESOME!!!

**[Creational Patterns](../README.md)** | **[Structural Patterns](../../Structural/README.md)** | **[Behavioral Patterns](../../Behavioral/README.md)**

**C++ Prototype Design Pattern**

|Pattern|   |   |   |   |
|---|---|---|---|---|
|  Singleton | [**C++**](../../../CPP/Creational/Singleton/README.md) | [**C#**](../../../Csharp/Creational/Singleton/README.md) | [Java](../../../Java/Creational/Singleton/README.md) | [PHP](../../../PHP/Creational/Singleton/README.md) |

[Show](./script/page01.md)

The Singleton design pattern ensures that a class has only one instance and provides a global point of access to it. Below is a basic example:

The Singleton class is defined in **Singleton.h**. It has a private constructor, which ensures that the class cannot be directly instantiated. The copy constructor and assignment operator are deleted to prevent copying.

```
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
In the **Singleton.cpp** file, the instance is initialized to nullptr and the getInstance() function checks if instance is nullptr. If it is, it creates a new Singleton object and assigns it to instance. If it isn't nullptr, then it just returns the existing instance.

```
#include "Singleton.h"

Singleton* Singleton::instance = 0;

Singleton* Singleton::getInstance() {
    if (instance == 0) {
        instance = new Singleton();
    }

    return instance;
}
```
We go to main to create our demo

```
#include <iostream>
#include "Singleton.h"

int main() {
    Singleton* s = Singleton::getInstance();
    Singleton* r = Singleton::getInstance();

    std::cout << s << std::endl;
    std::cout << r << std::endl;
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
```

when we run this demo we get

```
0x55768a152eb0
0x55768a152eb0
``

[TheRayCode.ORG](https://www.TheRayCode.org)  

[RayAndrade.COM](https://www.RayAndrade.com)

[Facebook](https://www.facebook.com/TheRayCode/) | [Twitter @TheRayCode](https://www.twitter.com/TheRayCode/) | [YouTube](https://www.youtube.com/TheRayCode/)

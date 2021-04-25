# TheRayCode
## Facade pattern c++

Facade is a structural design pattern that provides a simplified (but limited) interface to a complex system of classes, library or framework.

This example illustrates the structure of the Facade design pattern. It focuses on answering these questions:
<ol>
<li>What classes does it consist of?</li>
<li>What roles do these classes play?</li>
<li>In what way the elements of the pattern are related?</li>
</ol>

The Subsystem can accept requests either from the facade or client directly.
In any case, to the Subsystem, the Facade is yet another client, and it's not a part of the Subsystem.
```c++
#include <iostream>

class System1 {
public:
    std::string Operation1() const {
        return "System1: Ready!\n";
    }
    // ...
    std::string OperationN() const {
        return "System1: Go!\n";
    }
};
```
Some facades can work with multiple subsystems at the same time.
```c++
#include <iostream>

class System2 {
public:
    std::string Operation1() const {
        return "System2: Get ready!\n";
    }
    // ...
    std::string OperationZ() const {
        return "System2: Fire!\n";
    }
};
```
The Facade class provides a simple interface to the complex logic of one or several subsystems. 
The Facade delegates the client requests to the appropriate objects within the subsystem. 
The Facade is also responsible for managing their lifecycle. 
All of this shields the client from the undesired complexity of the subsystem.

Depending on your application's needs, you can provide the Facade with existing subsystem objects or force the Facade to create them on its own.

The Facade's methods are convenient shortcuts to the sophisticated functionality of the subsystems. 
However, clients get only to a fraction of a subsystem's capabilities.

```c++
class Facade {
protected:
    System1 *system1_;
    System2 *system2_;
public:
    Facade(
            System1 *system1 = nullptr,
            System2 *system2 = nullptr) {
        this->system1_ = system1 ?: new System1;
        this->system2_ = system2 ?: new System2;
    }
    ~Facade() {
        delete system1_;
        delete system2_;
    }
    std::string Operation() {
        std::string result = "Facade initializes systems:\n";
        result += this->system1_->Operation1();
        result += this->system2_->Operation1();
        result += "Facade orders systems to perform the action:\n";
        result += this->system1_->OperationN();
        result += this->system2_->OperationZ();
        return result;
    }
};
```

Let's now go to the main.cpp

The client code works with complex subsystems through a simple interface provided by the Facade. When a facade manages the lifecycle of the subsystem, the client might not even know about the existence of the subsystem. 
This approach lets you keep the complexity under control.


```cpp
#include "Facade.h"

void ClientCode(Facade *facade) {
    // ...
    std::cout << facade->Operation();
    // ...
}
```
The client code may have some of the system's objects already created. 
In this case, it might be worthwhile to initialize the Facade with these objects instead of letting the Facade create new instances.

```cpp
int main() {
    System1 *system1 = new System1;
    System2 *system2 = new System2;
    Facade *facade = new Facade(system1, system2);
    ClientCode(facade);

    delete facade;

    return 0;
}
```
When we compile and run we get:
```run
Facade initializes systems:
System1: Ready!
System2: Get ready!
Facade orders systems to perform the action:
System1: Go!
System2: Fire!
```

The Ray Code is AWESOME!!!

[Wikipedia](https://en.wikipedia.org/wiki/Facade_pattern)

----------------------------------------------------------------------------------------------------

Find Ray on:

[facebook](https://www.facebook.com/TheRayCode/)

[youtube](https://www.youtube.com/user/AndradeRay/)

[The Ray Code](https://www.RayAndrade.com)

[Ray Andrade](https://www.RayAndrade.org)

# TheRayCode
## Facade pattern c++



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
The Ray Code is AWESOME!!!

[Wikipedia](https://en.wikipedia.org/wiki/Facade_pattern)

----------------------------------------------------------------------------------------------------

Find Ray on:

[facebook](https://www.facebook.com/TheRayCode/)

[youtube](https://www.youtube.com/user/AndradeRay/)

[The Ray Code](https://www.RayAndrade.com)

[Ray Andrade](https://www.RayAndrade.org)

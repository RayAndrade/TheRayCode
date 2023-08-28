[home](./page01.md)

[back](./page03.md)

first we include

```
#include <algorithm>
#include "Adapter.h"
```

the **iostream** is already in **Target**

we add some client code
```
void ClientCode(const Target *target) {
    std::cout << target->Request();
}
```

in the main
```
std::cout << "Client: I can work just fine with the Target objects:\n";
Target *target = new Target;
ClientCode(target);
std::cout << "\n\n";
```

and
```
Adaptee *adaptee = new Adaptee;
std::cout << "Client: The Adaptee class has a weird interface. See, I don't understand it:\n";
std::cout << "Adaptee: " << adaptee->SpecificRequest();
std::cout << "\n\n";
```
and

```
```

[page 5](./page05.md)

[back](./page08.md)

At **main.cpp**

```cpp

#include <iostream>

#include "CreatorA.h"
#include "CreatorB.h"

void ClientCode(const Creator& creator) {
    // ...
    std::cout << "Client: I'm not aware of the creator's class, but it still works.\n"
              << creator.SomeOperation() << std::endl;
    // .
}

```

[page 10](./page10.md)

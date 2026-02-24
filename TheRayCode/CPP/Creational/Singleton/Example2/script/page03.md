[home](./page01.md)

[back](./page02.md)

### 2. Demonstration:

**main.cpp:**

```cpp
#include "OnlyOne.h"
```

Get OnlyOne instance
```
OnlyOne* o1 = OnlyOne::getInstance();
OnlyOne* o2 = OnlyOne::getInstance();
    
std::cout << "Address of o1: " << o1 << std::endl;
std::cout << "Address of o2: " << o2 << std::endl;

    // Demonstrate a method call
o1->demoMethod();
```

[page 4](./page04.md)

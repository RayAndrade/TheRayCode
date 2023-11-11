[home](./page01.md) | [back](./page04.md) | [next](./page06.md)

At **main.cpp**

```
#include <iostream>
#include "ConcretePrototype1.h"
#include "ConcretePrototype2.h"
```

```
ConcretePrototype1* prototype1 = new ConcretePrototype1();
Prototype* clonedPrototype1 = prototype1->clone();
```

Use **clonedPrototype1** 

```
delete prototype1;
delete clonedPrototype1;
```
Simar operations for ConcretePrototype2


[page 6](./page06.md)

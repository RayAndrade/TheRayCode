[home](./page01.md) | [back](./page04.md) | [next](./page06.md)

At **main.cpp**

```
#include <iostream>
#include "ConcretePrototype.h"
```


```
ConcretePrototype* prototype = new ConcretePrototype("Example");
ConcretePrototype* clonedPrototype = dynamic_cast<ConcretePrototype*>(prototype->clone());

std::cout << "Original object data: " << prototype->getData() << std::endl;
std::cout << "Cloned object data: " << clonedPrototype->getData() << std::endl;

delete prototype;
delete clonedPrototype;
```



[page 6](./page06.md)

[home](./page01.md) | [back](./page03.md) | [next](./page03.md)

At **main.cpp**

```
#include <iostream>
#include "Clown.h"
```


```
Clown* originalClown = new Clown("Happy");
originalClown->perform();

// Cloning the clown
Clown* clonedClown = static_cast<Clown*>(originalClown->clone());
clonedClown->perform();

delete originalClown;
delete clonedClown;
```


[page 5](./page05.md)

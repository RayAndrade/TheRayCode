[home](./page01.md)

[back](./page03.md)

In the main method

```
#include "Singleton.h"
#include <iostream>
```

```
    Singleton* s1 = Singleton::getInstance();
    Singleton* s2 = Singleton::getInstance();
    
    std::cout << "Address of s1: " << s1 << std::endl;
    std::cout << "Address of s2: " << s2 << std::endl;
    
    s1->demoMethod();
```


[page 5](./page05.md)

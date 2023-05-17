[home](./page01.md)

[back](./page02.md)

**Demo.cpp**

```
#include <iostream>
#include "Singleton.h"
```

```
int main() {  }
```

```
Singleton* s = Singleton::getInstance();
Singleton* r = Singleton::getInstance();

std::cout << s << std::endl;
std::cout << r << std::endl;
```



[page 4](./page04.md)

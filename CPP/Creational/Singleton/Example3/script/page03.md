[home](./page01.md)

[back](./page02.md)

**Singleton.cpp**

```
Singleton
```

```
#include "Singleton.h"
#include <iostream>
```

```
Singleton* Singleton::instance = nullptr;
```

```
Singleton* Singleton::getInstance() {
    if (instance == nullptr) {
        instance = new Singleton();
    }
    return instance;
}
```


```
void Singleton::demoMethod() {
    std::cout << "Singleton class method called!" << std::endl;
}
```



[page 4](./page04.md)

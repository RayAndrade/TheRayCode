[home](./page01.md)

[back](./page01.md)

In the Singleton.cpp file, the instance is initialized to nullptr and the getInstance() function checks if instance is nullptr. If it is, it creates a new Singleton object and assigns it to instance. If it isn't nullptr, then it just returns the existing instance

make a cpp file

```
Singleton
```

```
#include "Singleton.h"
```


```
Singleton* Singleton::instance = 0;
```

```
Singleton* Singleton::getInstance() {  }
```


```
if (instance == 0) {
    instance = new Singleton();
}

return instance;
```

[page 3](./page03.md)

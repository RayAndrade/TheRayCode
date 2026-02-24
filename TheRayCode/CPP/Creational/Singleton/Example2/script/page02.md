[home](./page01.md)

[back](./page01.md)


**OnlyOne.cpp:**

```
#include "OnlyOne.h"
```

```
OnlyOne* OnlyOne::instance = nullptr;
```


```
OnlyOne* OnlyOne::getInstance() {
    if (instance == nullptr) {
        instance = new OnlyOne();
    }
    return instance; }
```

```
void OnlyOne::demoMethod() {
    std::cout << "OnlyOne class method called!" << std::endl;
}
```


[page 3](./page03.md)

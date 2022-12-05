[back](./page03.md)


**AbstractFactory**

```cpp

//#include "AbstractProductA.h"
#include "AbstractProductB.h"

class AbstractFactory {
public:
    virtual AbstractProductA *CreateProductA() const = 0;
    virtual AbstractProductB *CreateProductB() const = 0;
};

```

[page 5](./page05.md)

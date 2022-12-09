[back](./page06.md)

```cpp

#include "Creator.h"
#include "ProductA.h"

class CreatorA : public Creator {

public:
    Product* FactoryMethod() const override {
        return new ProductA();
    }
};


```

[page 8](./page08.md)

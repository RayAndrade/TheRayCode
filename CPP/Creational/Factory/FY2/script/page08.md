[back](./page07.md)

```cpp

#include "Creator.h"
#include "ProductB.h"

class CreatorB : public Creator {

public:
    Product* FactoryMethod() const override {
        return new ProductB();
    }
};

```

[page 9](./page09.md)

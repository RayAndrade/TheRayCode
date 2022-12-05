[back](./page10.md)

**main**

**Client**

**main**

```cpp

#include "AbstractFactory.h"
#include "ProductA2.h"
#include "ProductB2.h"

class ConcreteFactory2 : public AbstractFactory {
public:
    AbstractProductA *CreateProductA() const override {
        return new ProductA2();
    }
    AbstractProductB *CreateProductB() const override {
        return new ProductB2();
    }
};

```

[page 12](./page12.md)

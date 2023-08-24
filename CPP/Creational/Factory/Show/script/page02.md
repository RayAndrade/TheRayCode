[home](./page01.md)

[back](./page01.md)

Now, let's create two concrete product classes **ProductA.h** and **ProductB.h**:


```
ProductA
```

```
class ProductA {  };
```

```
 : public Product
```


```
#include "Product.h"
```


```
public:
    std::string GetName() override {
        return "ProductA";
    }
```


[page 3](./page03.md)

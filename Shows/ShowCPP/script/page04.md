[home](./page01.md)

[back](./page03.md)

Now we will create a *factory class* **ProductFactory.h** that will be responsible for creating objects of **ProductA** and **ProductB**:


```
ProductFactory
```

```
class ProductFactory {  };
```

add includes

```
#include "Product.h"
#include "ProductA.h"
#include "ProductB.h"
```

we add an enum we will use to switch which we desire the **ProductType**

```
enum class ProductType {
    A,
    B
};
```

now lets add our class

with our **switch** statemt

```
public:
    static Product* CreateProduct(ProductType type) {
        switch (type) {
            case ProductType::A:
                return new ProductA();
            case ProductType::B:
                return new ProductB();
            default:
                return nullptr;
        }
    }
```



[page 5](./page05.md)

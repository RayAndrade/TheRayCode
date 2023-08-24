In our example of the factory design pattern using different header files and an index.cpp file to demonstrate it. For simplicity, we will create two types of products: ProductA and ProductB.

First, let's define a base product class **Product.h**:

create a heater file

```
Product
```

```
#include <string>

class Product { 
public:
    virtual ~Product() {};
    virtual std::string GetName() = 0;
};
```
continue with script

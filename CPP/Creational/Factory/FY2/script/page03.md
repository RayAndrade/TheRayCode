[back](./page02.md)

We start by creating an *interface* I call **Product**.
```cpp
#include <iostream>

class Product {
public:
    virtual ~Product() { }
    virtual std::string Operation() const = 0;
};
```


[page 4](./page04.md)

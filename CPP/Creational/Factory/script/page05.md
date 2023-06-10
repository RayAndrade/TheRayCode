[home](./page01.md)

[back](./page04.md)


Finally, we will use the factory class in the **main.cpp** file:

```
#include <iostream>
#include "ProductFactory.h"
```
in **main** we put:
```
Product* productA = ProductFactory::CreateProduct(ProductType::A);
if (productA != nullptr) {
    std::cout << "Created: " << productA->GetName() << std::endl;
    delete productA;
}

Product* productB = ProductFactory::CreateProduct(ProductType::B);
if (productB != nullptr) {
    std::cout << "Created: " << productB->GetName() << std::endl;
    delete productB;
}
```

This code creates a **ProductA** and a **ProductB** object through the **ProductFactory**, and then deletes them.

Please note that while this example demonstrates the factory pattern, it doesn't follow good practices for memory management in modern C++. In modern C++, it's better to use smart pointers such as *std::unique_ptr or std::shared_ptr* instead of raw pointers to manage object lifetimes automatically and safely.




[page 6](./page06.md)

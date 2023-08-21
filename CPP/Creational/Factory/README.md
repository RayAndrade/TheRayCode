# [TheRayCode](../../../README.md) is AWESOME!!!

**[Creational Patterns](../README.md)** | **[Structural Patterns](../../Structural/README.md)** | **[Behavioral Patterns](../../Behavioral/README.md)**

**C++ Factory Design Pattern**

|Pattern|   |   |   |
|---|---|---|---|
|  [**Factory**](../../../CPP/Creational/Factory/README.md) | [**C#**](../../../Csharp/Creational/Factory/README.md) | [Java](../../../Java/Creational/Factory/README.md) | [PHP](../../../PHP/Creational/Factory/README.md) |

**C++ Factory Design Pattern**

[script](./script/page01.md)

In our example of the factory design pattern using different header files and an index.cpp file to demonstrate it. For simplicity, we will create two types of products: ProductA and ProductB.

First, let's define a base product class **Product.h**:

```
#include <string>

class Product {
public:
    virtual ~Product() {};
    virtual std::string GetName() = 0;
};
```

Now, let's create two concrete product classes **ProductA.h** and **ProductB.h**:

```
#include "Product.h"

class ProductA : public Product {
public:
    std::string GetName() override {
        return "ProductA";
    }
};
```

and 

```
#include "Product.h"

class ProductB : public Product {
public:
    std::string GetName() override {
        return "ProductB";
    }
};
```
Now we will create a *factory class* **ProductFactory.h** that will be responsible for creating objects of **ProductA** and **ProductB**:

```
#include "Product.h"
#include "ProductA.h"
#include "ProductB.h"

enum class ProductType {
    A,
    B
};

class ProductFactory {
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
};
```

Finally, we will use the factory class in the **index.cpp** file:

```
#include <iostream>
#include "ProductFactory.h"

int main() {
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

    return 0;
}
```

This code creates a **ProductA** and a **ProductB** object through the **ProductFactory**, and then deletes them.

Please note that while this example demonstrates the factory pattern, it doesn't follow good practices for memory management in modern C++. In modern C++, it's better to use smart pointers such as *std::unique_ptr or std::shared_ptr* instead of raw pointers to manage object lifetimes automatically and safely.


[TheRayCode.ORG](https://www.TheRayCode.org)

[RayAndrade.COM](https://www.RayAndrade.com)

[Facebook](https://www.facebook.com/TheRayCode/) | [Twitter @TheRayCode](https://www.twitter.com/TheRayCode/) | [YouTube](https://www.youtube.com/TheRayCode/)

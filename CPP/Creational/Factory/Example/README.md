In our example of the factory design pattern using different header files and an index.cpp file to demonstrate it. 
For simplicity, we will create two types of products: ProductA and ProductB.

First, let's define a base product class Product.h:

```
#include "Product.h"

class ProductA : public Product {
public:
    std::string GetName() override {
        return "ProductA";
    }
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
class ProductB : public Product {
public:
    std::string GetName() override {
        return "ProductB";
    }
};
```
Both implement the **Product** class.

Now we will create a factory class **ProductFactory.h** that will be responsible for creating objects of **ProductA** and **ProductB**:

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
include an enum for the **ProductType**

now let put this in the main for a demo.
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

Finally, we will use the factory class in the **main.cpp** file:

```angular2html
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

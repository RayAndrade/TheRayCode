
[top](../README.md)


Below is a **C++** implementation of the **Builder** design pattern, a **Creational** pattern, following the **Gang of Four (GoF)** structure. Each class is placed in its own `.h` and `.cpp` files, with the order of creation designed to avoid dependency issues.

---

## ✅ Class Creation Order (to avoid dependency errors)
1. **Product (The complex object being built)**
2. **Builder (Abstract builder interface)**
3. **ConcreteBuilder (Implements construction steps)**
4. **Director (Orchestrates the building process)**
5. **Client Code (`main.cpp`)**

---

## 🔧 1. `Product.h`

```cpp
#ifndef PRODUCT_H
#define PRODUCT_H

#include <string>
#include <vector>

class Product {
private:
    std::vector<std::string> parts;

public:
    void addPart(const std::string& part);
    void show() const;
};

#endif // PRODUCT_H
```

---

## 🔧 `Product.cpp`

```cpp
#include "Product.h"
#include <iostream>

void Product::addPart(const std::string& part) {
    parts.push_back(part);
}

void Product::show() const {
    std::cout << "Product parts: ";
    for (const auto& part : parts) {
        std::cout << part << " ";
    }
    std::cout << std::endl;
}
```

---

## 🧱 2. `Builder.h`

```cpp
#ifndef BUILDER_H
#define BUILDER_H

#include "Product.h"

// Abstract Builder
class Builder {
public:
    virtual void buildPartA() = 0;
    virtual void buildPartB() = 0;
    virtual Product* getResult() = 0;
    virtual ~Builder() {}
};

#endif // BUILDER_H
```

---

## 🧱 3. `ConcreteBuilder.h`

```cpp
#ifndef CONCRETEBUILDER_H
#define CONCRETEBUILDER_H

#include "Builder.h"

// Concrete Builder
class ConcreteBuilder : public Builder {
private:
    Product* product;

public:
    ConcreteBuilder();
    ~ConcreteBuilder();

    void buildPartA() override;
    void buildPartB() override;
    Product* getResult() override;
};

#endif // CONCRETEBUILDER_H
```

---

## 🧱 `ConcreteBuilder.cpp`

```cpp
#include "ConcreteBuilder.h"

ConcreteBuilder::ConcreteBuilder() {
    product = new Product();
}

ConcreteBuilder::~ConcreteBuilder() {
    delete product;
}

void ConcreteBuilder::buildPartA() {
    product->addPart("PartA");
}

void ConcreteBuilder::buildPartB() {
    product->addPart("PartB");
}

Product* ConcreteBuilder::getResult() {
    return product;
}
```

---

## 🎯 4. `Director.h`

```cpp
#ifndef DIRECTOR_H
#define DIRECTOR_H

#include "Builder.h"

// Director
class Director {
public:
    void construct(Builder* builder);
};

#endif // DIRECTOR_H
```

---

## 🎯 `Director.cpp`

```cpp
#include "Director.h"

void Director::construct(Builder* builder) {
    builder->buildPartA();
    builder->buildPartB();
}
```

---

## 👨‍💻 5. `main.cpp`

```cpp
#include <iostream>
#include "Director.h"
#include "ConcreteBuilder.h"

int main() {
    Director director;
    ConcreteBuilder builder;

    director.construct(&builder);
    Product* product = builder.getResult();

    product->show();

    return 0;
}
```

---

## 🧠 Summary & Explanation

| Class/File        | Role                                                                 |
|------------------|----------------------------------------------------------------------|
| `Product`         | The complex object that is built step by step.                       |
| `Builder`         | Abstract interface that defines methods for building the parts.      |
| `ConcreteBuilder` | Implements the building steps and returns the final product.         |
| `Director`        | Controls the order of building steps, using a `Builder`.             |
| `main.cpp`        | The client code that puts it all together.                           |

---

## ✅ Benefits of the Builder Pattern in C++
- Encapsulates complex construction logic.
- Supports multiple representations of a product.
- Promotes separation of concerns (product vs. construction steps).

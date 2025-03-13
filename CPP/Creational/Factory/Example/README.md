[top](../README.md)
video: https://vimeo.com/1065235844

Here's a structured C++ implementation of the **Factory** design pattern, a **Creational** pattern, with each class in its own file. I will follow the **Gang of Four (GoF)** book "Design Patterns: Elements of Reusable Object-Oriented Software" and ensure the order of class creation prevents dependency issues.

---

### **Class Creation Order**
To avoid dependency errors, follow this order:
1. **Product (Abstract Product Class)**
2. **ConcreteProduct (Concrete Implementations)**
3. **Creator (Abstract Factory Class)**
4. **ConcreteCreator (Factory Implementations)**

---

Now, let's create the C++ implementation:

---

### **1. `Product.h` (Abstract Product)**
This defines the interface for the objects the factory will create.

```cpp
#ifndef PRODUCT_H
#define PRODUCT_H

#include <iostream>

// Abstract Product class
class Product {
public:
    virtual void use() = 0; // Pure virtual function to be implemented by concrete products
    virtual ~Product() {} // Virtual destructor for proper cleanup
};

#endif // PRODUCT_H
```

#### **Explanation**
- This is an **abstract product** that declares the interface (`use()` method).
- The **destructor is virtual** to ensure derived class destructors are called correctly.

---

### **2. `ConcreteProduct.h` & `ConcreteProduct.cpp` (Concrete Implementations)**

#### **`ConcreteProduct.h`**
```cpp
#ifndef CONCRETEPRODUCT_H
#define CONCRETEPRODUCT_H

#include "Product.h"

// Concrete Product class
class ConcreteProductA : public Product {
public:
    void use() override; // Implementation of abstract method
};

class ConcreteProductB : public Product {
public:
    void use() override;
};

#endif // CONCRETEPRODUCT_H
```

#### **`ConcreteProduct.cpp`**
```cpp
#include "ConcreteProduct.h"

// Implement ConcreteProductA's behavior
void ConcreteProductA::use() {
    std::cout << "Using ConcreteProductA" << std::endl;
}

// Implement ConcreteProductB's behavior
void ConcreteProductB::use() {
    std::cout << "Using ConcreteProductB" << std::endl;
}
```

#### **Explanation**
- **ConcreteProductA** and **ConcreteProductB** are implementations of the abstract `Product` class.
- The `use()` method is overridden to provide specific behavior.

---

### **3. `Creator.h` (Abstract Factory Class)**
This defines the factory interface.

```cpp
#ifndef CREATOR_H
#define CREATOR_H

#include "Product.h"

// Abstract Factory class
class Creator {
public:
    virtual Product* factoryMethod() = 0; // Factory method to create objects
    virtual ~Creator() {} // Virtual destructor
};

#endif // CREATOR_H
```

#### **Explanation**
- This is the **abstract creator** that declares `factoryMethod()`, which must be implemented by subclasses.
- **Returns a pointer to Product** so that concrete creators can return different types.

---

### **4. `ConcreteCreator.h` & `ConcreteCreator.cpp` (Factory Implementations)**

#### **`ConcreteCreator.h`**
```cpp
#ifndef CONCRETECREATOR_H
#define CONCRETECREATOR_H

#include "Creator.h"
#include "ConcreteProduct.h"

// Concrete Creator for ProductA
class ConcreteCreatorA : public Creator {
public:
    Product* factoryMethod() override;
};

// Concrete Creator for ProductB
class ConcreteCreatorB : public Creator {
public:
    Product* factoryMethod() override;
};

#endif // CONCRETECREATOR_H
```

#### **`ConcreteCreator.cpp`**
```cpp
#include "ConcreteCreator.h"

// Factory method returns an instance of ConcreteProductA
Product* ConcreteCreatorA::factoryMethod() {
    return new ConcreteProductA();
}

// Factory method returns an instance of ConcreteProductB
Product* ConcreteCreatorB::factoryMethod() {
    return new ConcreteProductB();
}
```

#### **Explanation**
- **ConcreteCreatorA** and **ConcreteCreatorB** override `factoryMethod()`.
- They instantiate **ConcreteProductA** and **ConcreteProductB** respectively.

---

### **5. `main.cpp` (Client Code)**
Now, let's use the factory in our client code.

```cpp
#include <iostream>
#include "ConcreteCreator.h"

int main() {
    // Create a factory for ProductA
    Creator* creatorA = new ConcreteCreatorA();
    Product* productA = creatorA->factoryMethod();
    productA->use(); // Output: Using ConcreteProductA

    // Create a factory for ProductB
    Creator* creatorB = new ConcreteCreatorB();
    Product* productB = creatorB->factoryMethod();
    productB->use(); // Output: Using ConcreteProductB

    // Cleanup
    delete productA;
    delete creatorA;
    delete productB;
    delete creatorB;

    return 0;
}
```

---

## **Final Explanation**
1. **Abstract Product (`Product`)**
   - Defines a general interface for the products.
   
2. **Concrete Products (`ConcreteProductA`, `ConcreteProductB`)**
   - Implement the `Product` interface.
   - Provide concrete functionality.

3. **Abstract Creator (`Creator`)**
   - Declares the `factoryMethod()`.

4. **Concrete Creators (`ConcreteCreatorA`, `ConcreteCreatorB`)**
   - Implement `factoryMethod()` to create specific `Product` objects.

5. **Client Code (`main.cpp`)**
   - Uses the factory method to instantiate objects without knowing their concrete class.

---

## **Key Takeaways**
- **Encapsulation**: The factory method ensures the client only depends on the abstract `Product` interface, not concrete classes.
- **Scalability**: Adding new products only requires adding new concrete products and their corresponding creators.
- **Decoupling**: The client does not depend on the actual product classes.

This follows the **Gang of Four**'s exact pattern and ensures best practices for structuring a C++ project with minimal dependency issues.

Would you like additional variations like **Parameterized Factory Methods** or **Factory with Singleton**? 🚀

# The Ray Code

In this posting I want go over the **Factory** design pattern using *c++*.
We start by creating an interface we call **Product**.
```c++
#include <iostream>

class Product {
public:
    virtual ~Product() {}
    virtual std::string Operation() const = 0;
};
```
This interface accepts two methods. A destructor for **Product** and a method we generically call **Operation**.
**Operation** returns a string.

We now will a two concrete product clases called **ProductA** and **ProductB**. Concrete Products provide various implementations of the Product interface.
The code for **ProductA**  is:
```c++
#include "Product.h"

class ProductA : public Product {
public:
    std::string Operation() const override {
        return "{Result of ProductA}";
    }
};
```
For **ProductB** the code is:
```c++
#include "Product.h"

class CProductB : public Product {
public:
    std::string Operation() const override {
        return "{Result of ProductB}";
    }
};
```
The next interface we create is **Creator**. Note that the Creator may also provide some default implementation of the factory method.

The Creator class declares the factory method that is supposed to return an
 * object of a Product class. The Creator's subclasses usually provide the
 * implementation of this method

The code for is:
```c++
#include "Creator.h"
#include "ProductA.h"

class CreatorA : public Creator {

public:
    Product* FactoryMethod() const override {
        return new ProductA();
    }
};
```
We include both **Creator**.h and **ProductA**.h. We also extend the class with **Creator**.
We do the same for another class we create.
We create the class **CreatorB** and extend it also with **Creator**.h.
In the **FactoryMethod** we return a new **ProductB**
```c++
#include "Creator.h"
#include "ProductB.h"

class CreatorB : public Creator {

public:
    Product* FactoryMethod() const override {
        return new **ProductB**();
    }
};
```









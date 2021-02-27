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
We include both **Creator**.h and **ProductB**.h. 
We also extend the class with **Creator**.

We do the same for another class we create **CreatorB**.h and extend it also with **Creator** class.
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

Lastly we go to **main.cpp**.
First we add the includes that we will be using:
```c++
#include "Product.h"
#include "ProductA.h"
#include "ProductB.h"
#include "Creator.h"
#include "CreatorA.h"
#include "CreatorB.h"
```
 The client code works with an instance of a concrete creator, albeit through
 * its base interface. As long as the client keeps working with the creator via
 * the base interface, you can pass it any creator's subclass.

```c++
void ClientCode(const Creator& creator) {
    // ...
    std::cout << "Client: I'm not aware of the creator's class, but it still works.\n"
              << creator.SomeOperation() << std::endl;
    // .
}
```
Our last bit of code we add will be our **main** method:

```c++
int main() {

    std::cout << "App: Launched with the CreatorA." << std::endl;
    Creator* creatorA = new CreatorA();
    ClientCode(*creatorA);

    std::cout << std::endl;
    std::cout << "App: Launched with the CreatorB." << std::endl;
    Creator* creatorB = new CreatorB();
    ClientCode(*creatorB);

    delete creatorA;
    delete creatorB;

    std::cout << "The Ray Code is AWESOME!!!" << std::endl;
    return 0;
}

```
The result shoud be:
```result
Client: I'm not aware of the creator's class, but it still works.
Creator: The same creator's code has just worked with {Result of the ProductA}

App: Launched with the ConcreteCreatorB.
Client: I'm not aware of the creator's class, but it still works.
Creator: The same creator's code has just worked with {Result of the ProductB}
The Ray Code is AWESOME!!!

```









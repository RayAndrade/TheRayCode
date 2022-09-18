
In this artical I will take a look at the **Factory** design pattern using *c++*.

Here is my make file:

```make
cmake_minimum_required(VERSION 3.21)
project(Show)

set(CMAKE_CXX_STANDARD 23)
```

We start by creating an *interface* I call **Product**.
```c++
#include <iostream>

class Product {
public:
    virtual ~Product() {}
    virtual std::string Operation() const = 0;
};
```
This interface will accept two methods. A destructor for **Product** and a method we call **Operation**.
**Operation** returns a string value.

We will create two concrete product classes one will be called **ProductA** and the other **ProductB**. 
*Concrete Products* provide various implementations of the **Product**'s interface.

For **ProductA**  I proved the following code:
```c++
#include "Product.h"

class ProductA : public Product {
public:
    std::string Operation() const override {
        return "{Result of ProductA}";
    }
};
```
Similarly, for **ProductB** the code is:
```c++
#include "Product.h"

class ProductB : public Product {
public:
    std::string Operation() const override {
        return "{Result of ProductB}";
    }
};
```
Now we create an *interface* I call **Creator**. 

The Creator class declares the factory method that is supposed to return an object of a *Product class*. 
The Creator's subclasses usually provide the implementation of this method.

The **Creator** may also provide some default implementations of the *factory method*.

```c++
#include "Product.h"

class Creator { };
```
Even though its name is **Creator**'s, that not it's primary responsibility. 
The Creator is contains some core business logic that relies on **Product** *objects*, 
by returning its *factored method*. 

Subclasses can indirectly change that business logic by overriding the factory method 
and returning a different type of product from it.


```c++
public:
    virtual ~Creator() {};
    virtual Product *FactoryMethod() const = 0;
    std::string SomeOperation() const {
        Product *product = this->FactoryMethod();
        std::string result = "Creator: The same creator's code has just worked with " + product->Operation();
        delete product;
        return result;
    }
```


The code for **CreatorA.h** will be:
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
We include both *Creator.h* and **ProductB**.h. 
We also extend the class with *Creator*.

We do the same for another class we create **CreatorB**.h and extend it also with **Creator** class.
In the **FactoryMethod** we return a new **ProductB**

Let's create another class we call **CreatorB**. We extend it with **Creator**.

```c++
#include "Creator.h"
#include "ProductB.h"

class CreatorB : public Creator {

public:
    Product* FactoryMethod() const override {
        return new ProductB();
    }
};
```

Lastly we go to **main.cpp**. At the top we add the *includes* that we will be using:
```c++
#include "Product.h"
#include "ProductA.h"
#include "ProductB.h"
#include "Creator.h"
#include "CreatorA.h"
#include "CreatorB.h"
```
 The client code works with an instance of a concrete creator.
So I will pass in a creator object.

```c++
void ClientCode(const Creator& creator) {
    // ...
    std::cout << "Client: I'm not aware of the creator's class, but it still works.\n"
              << creator.SomeOperation() << std::endl;
    // .
}
```
Our last bit of code that we will add to our **main** method is:

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

    return 0;
}

```
The result shoud be:
```result
App: Launched with the CreatorA.
Client: I'm not aware of the creator's class, but it still works.
Creator: The same creator's code has just worked with {Result of the ProductA}

App: Launched with the CreatorB.
Client: I'm not aware of the creator's class, but it still works.
Creator: The same creator's code has just worked with {Result of the ProductB}

```

![Abstract Factory](https://raw.githubusercontent.com/RayAndrade/TheRayCode/main/UMLs/images/AbstractFactory/AbstractFactory088.png)

[Wikipedia](https://en.wikipedia.org/wiki/Factory_method_pattern)


----------------------------------------------------------------------------------------------------

Find Ray on:


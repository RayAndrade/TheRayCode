In this video I will be giving a demonstration of the Factory design pattern.
Let me show you the make file at te beginning.
We will later show how it change at the end of this tortial.

My CMakeList.txt file at the beginning.
```make
cmake_minimum_required(VERSION 3.21)
project(Show)

set(CMAKE_CXX_STANDARD 23)

add_executable(Show main.cpp)
```

**Product**

to this file I add the following code:
```c++
  class Product{};
```
Inside of this *interface* we add the folloing code:
```c++
    public:
    virtual ~Product() {}
    virtual std::string Operation() const = 0;
```

because we are using the **std** we will to incude the iostream

```c++
 #include <iostream>
```

_____________________________________________________________________________

Now we create an interface I call **Creator**. The code for this file will be.
```c++
  class Creator{ };
```
We will be using the **Product** *interface*

```c++
#include "Product.h"
```

and we add some code
```c++

public:
    virtual ~Creator() {};
    virtual Product *FactoryMethod() const = 0;
    std::string SomeOperation() const {
        Product *product = this->FactoryMethod();
        std::string result = "Creator: The same creator's code has just worked with " + product->Operation();
        delete product;
        return result;
```
__________________________________________________________________

Now let's create a couple of Products we call **ProductA** and **ProductB**.

First we create **ProductA**.

```c++
  class ProductA { };
```
We will extend ProductA with Product
```c++
  : public Product
```

and we add an operation to override *Operation* in **Product**

```c++
public:
    std::string Operation() const override {
        return "{Result of ProductA}";
    }
```
__________________________________________________________________

Let's do the same for another product we call **ProductB**

```c++
  class ProductB { };
```
extent this class also with : public **Product**
```c++
  : public Product
```
Include **Product**
```c++
  #include "Product.h"
```
the code for **ProductB** will be
```c++
  public:
    std::string Operation() const override {
        return "{Result of ProductB}";
    }
```
__________________________________________________________________

let's create a *class* called **Creator** 
```c++
  class Creator { };
```
We will need the **Product** class

```c++
  #include "Product.h"
```
We also exttend the class with **Product** and this make both **ProductA** and **ProductB** the same type.

```c++
  : public Product
```

The code for the **Creator** will be
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

__________________________________________________________________


let's create a *class* called **CreatorA** 

```c++
class CreatorA{ };
```
we will extend it with the **Creator** *class*
Include

```c++
 #include "Creator.h"
```



```c++
  : public Creator
```
so we need to have it in our *inclues list* (use auto generate)
```c++
  #include "Creator.h"
```
let's add some code, a pointer called **FactoryMethod** that returns a **new ProductA**

```c++
  Product* FactoryMethod() const override {
        return new ProductA();
    }
```
of course we also need to include **ProductA** also (use auto generate)
```c++
  #include "ProductA.h"
```
__________________________________________________________________


et's do the same and create the **CreatorB** *class*.
We extend it with
```c++
  : public Creator
```
We use the auto generator the **#include "Creator.h"**

Let add a method we call the **FactoryMethod**
```c++
public:
    Product* FactoryMethod() const override {
        return new ProductB();
    }
```
and of course we need to add the **#include "ProductB.h"** class file.

Now let's put this all together in the **main.cpp**

first let add the inculde files that I will need and just created for this project.
next I want to create some cleint code

```c++
void ClientCode(const Creator& creator) {
    // ...
    std::cout << "Client: I'm not aware of the creator's class, but it still works.\n"
              << creator.SomeOperation() << std::endl;
    // .
}
```

Fisrt le me create the **CreatorA**

```c++
std::cout << "App: Launched with the CreatorA." << std::endl;
Creator* creatorA = new CreatorA();
ClientCode(*creatorA);
```

































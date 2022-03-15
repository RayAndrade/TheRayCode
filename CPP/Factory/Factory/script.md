# TheRayCode
## Factory c++

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
    virtual ~Product() { }
    virtual std::string Operation() const = 0;
};
```
This interface will accept two methods. A destructor for **Product** and a method we call **Operation**.
**Operation** returns a string value.

We will create two concrete product classes one will be called **ProductA** and the other **ProductB**. 
*Concrete Products* provide various implementations of the **Product**'s interface.

For **ProductA**  I proved the following code:

We start by creating the class **ProductA** 

```c++
 class ProductA { };
```
we extend this class with **Product**, so let's include **Product**

```c++
  #include "Product.h"
```

and extend

```c++
  :public Product
```

and we add
```c++
 public:
    std::string Operation() const override {
        return "{Result of ProductA}";
    }
```

because we incluced **Product**,**Product** also has **iostream** and we dont' need to incude it again 

Similarly we do the samething for **ProductB**.


```c++
 class ProductB { };
```
we include **Product.h**

```c++
   #include "Product.h"
```
and extend

```c++
  :public Product
```

The code for **ProductB** will be simular
```c++
  public:
    std::string Operation() const override {
        return "{Result of ProductB}";
    }
```

Now we create an *interface* called **Creator**. 

The Creator class declares the factory method that is supposed to return an object of a *Product class*. 
The Creator's subclasses usually provides the implementation of this method.

The **Creator** may also provide some default implementations of the *factory method*.

first let's incunde the parent of **ProductA** and **ProductB**

```c++
 #include "Product.h"
```

here's the class **Creator**

```c++
 class Creator { };
```

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

let's create a class called **CreatorA** and **CreatorA** will be responsible for creating **ProductA** objects.

```c++
 class CreatorA { };
```

Since **CreatorA** will be creating **ProductA** objects and we will be using the **Creator** we include both

```c++
 #include "Creator.h"
#include "ProductA.h"

```

We this class with the **Creator**

```c++
  : public Creator
```
The code for this class is
```c++
  public:
    Product* FactoryMethod() const override {
        return new ProductA();
    }
```
Now let's create a **CreatorB** which will creates **ProductB**s

Let's create the class
```c++
class CreatorB { };
```
we want to extend it with **Product** also so let's include it

```c++
  #include "Product.h"
```
next we extend **ProductB** with **Creator**
```c++
  : public Creator
```

and for code we have

```c++
 public:
    Product* FactoryMethod() const override {
        return new ProductB();
    }
``



Lastly we go to **main.cpp**. At the top we add the *includes* that we will be using:
```c++

#include "ProductA.h"
#include "ProductB.h"

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

[facebook](https://www.facebook.com/TheRayCode/)

[youtube](https://www.youtube.com/user/AndradeRay/)

[The Ray Code](https://www.RayAndrade.com)

[Ray Andrade](https://www.RayAndrade.org)








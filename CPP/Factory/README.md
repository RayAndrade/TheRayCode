# TheRayCode
## Factory c++

In this artical I will take a look at the **Factory** design pattern using *c++*.

I will be doing this demo in c++
```make
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

Now we will create two concrete product clases. One will be called **ProductA** and the other **ProductB**. 
Concrete Products provide various implementations of the **Product** interface.
For **ProductA**  I proved the following:
```c++
#include "Product.h"

class ProductA : public Product {
public:
    std::string Operation() const override {
        return "{Result of ProductA}";
    }
};
```
And, for **ProductB** the code is:
```c++
#include "Product.h"

class ProductB : public Product {
public:
    std::string Operation() const override {
        return "{Result of ProductB}";
    }
};
```
Next we create an interface we call **Creator**. 


The Creator class declares the factory method that is supposed to return an object of a Product class. 
The Creator's subclasses usually provide the implementation of this method.

Note that the **Creator** may also provide some default implementation of the *factory method*.

```c++
#include "Product.h"

class Creator { };
```
Also note that, despite its name, the Creator's primary responsibility is **not** creating products. 
Usually, it contains some core business logic that relies on Product objects, 
returned by the factory method. 
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


The code for **CreatorA.h** is:
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
 The client code works with an instance of a concrete creator, albeit through  its base interface. 
 As long as the client keeps working with the creator via the base interface, you can pass it any creator's subclass.

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








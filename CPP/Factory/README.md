## The Ray Code ##

**Factory** using C++

The first class we add will be called **Project**.h to this file we add the following *include* file to our code **iostream**: 

```c++
#include <iostream>
```
We add to the class **Product** a *destructor* method and a virtual string called **Operation**.

```c++
class Product {
public:
    virtual ~Product() {}
    virtual std::string Operation() const = 0;
};
```
Our class has two virtual methods that handles a destructor for **Product** and an **Operation** that returns a *string* value.

The next class file we add to our project is called **ConcreteProductA**. 
The code for this files is:
```c++
#include "Product.h"

class ConcreteProductA : public Product {
public:
    std::string Operation() const override {
        return "{Result of the ConcreteProductA}";
    }
};
```
Let's create another product we call **ConcreteProductB** the code for this file
is similar to **ConcreteProductA**. For this file we add the following code:
```c++
#include "Product.h"

class ConcreteProductB : public Product {
public:
    std::string Operation() const override {
        return "{Result of the ConcreteProductB}";
    }
};
```

Now let's shift our focus to the **Creator**.h class. In this class we have
the following code

```c++
public:
    virtual ~Creator(){};
    virtual Product* FactoryMethod() const = 0;

    std::string SomeOperation() const {
        Product* product = this->FactoryMethod();
        std::string result = "Creator: The same creator's code has just worked with " + product->Operation();
        delete product;
        return result;
    }
};
```
In the next part of our tutorial I want to create a couple creator objects called
**ConcreteCreatorA**.h and **ConcreteCreatorB**.h. 

In **ConcreteCreatorA**.h we have the following code:

```c++
#include "Creator.h"
#include "ConcreteProductA.h"

class ConcreteCreatorA : public Creator {
public:
    Product* FactoryMethod() const override {
        return new ConcreteProductA();
    }
};
```
Note that the signature of the method still uses the abstract product type, even though the concrete 
product is actually returned from the method. This way the Creator can stay independent of concrete product classes.

The code for our second creator **ConcreteCreatorB**.h is:

```c++
#include "Creator.h"
#include "ConcreteProductB.h"

class ConcreteCreatorB : public Creator {
public:
    Product* FactoryMethod() const override {
        return new ConcreteProductB();
    }
};
```

lastly we go to main to run our demonstration.

```c++

#include "Product.h"
#include "ConcreteProductA.h"
#include "ConcreteProductB.h"
#include "Creator.h"
#include "ConcreteCreatorA.h"
#include "ConcreteCreatorB.h"

/**
 * The client code works with an instance of a concrete creator, albeit through
 * its base interface. As long as the client keeps working with the creator via
 * the base interface, you can pass it any creator's subclass.
 */

void ClientCode(const Creator& creator) {
    // ...
    std::cout << "Client: I'm not aware of the creator's class, but it still works.\n"
              << creator.SomeOperation() << std::endl;
    // .
}

/**
 * The Application picks a creator's type depending on the configuration or
 * environment.
 */



int main() {

    std::cout << "App: Launched with the ConcreteCreatorA." << std::endl;
    Creator* creatorA = new ConcreteCreatorA();
    ClientCode(*creatorA);

    std::cout << std::endl;
    std::cout << "App: Launched with the ConcreteCreatorB." << std::endl;
    Creator* creatorB = new ConcreteCreatorB();
    ClientCode(*creatorB);

    delete creatorA;
    delete creatorB;

    std::cout << "The Ray Code is AWESOME!!!" << std::endl;
    return 0;
}

```


[link to RayAndrade.com](http://RayAndrade.com)

[link to RayAndrade.org](http://RayAndrade.org)

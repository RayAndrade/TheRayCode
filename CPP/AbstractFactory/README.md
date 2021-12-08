# TheRayCode
## Abstract Factory c++

I'll be doing this demo in c++
```make
set(CMAKE_CXX_STANDARD 23)
```
In this article we will review the **Abstract Factory** pattern.
This pattern allows you to create a family of classes in which
the subclasses of this *family* can cooperate together.



According to our interface we need add two classes, or two classes are required.
Let's start by creating a couple of *Abstract* products we call **AbstractProductA** and **AbstractProductB**.
Each distinct product of a product family should have a base interface. 
All variants of this product must implement this interface.

So we add the **AbstractProductA**. 
Each distinct product of a product family should have a base interface. 
All variants of the product must implement this interface.

```c++
#include <string>
class AbstractProductA {
public:
    AbstractProductA(){};
    virtual std::string UsefulFunctionA() const = 0;
};
```

Here's the the base interface of another product. 
All products can interact with each other, but proper interaction is possible only between products of* the same concrete variant.
And to add **AbstractProductB** the code will be.

```c++
#include "AbstractProductA.h"
class AbstractProductB {
public:
    ~AbstractProductB(){};
    virtual std::string UsefulFunction2() const = 0;
    virtual std::string AnotherUsefulFunctionB(const AbstractProductA &collaborator) const = 0;
};
```

Let's create an interface.
The Abstract Factory interface declares a set of methods that return different abstract products. 
These products are called a family and are related by a high-level theme or concept. 
Products of one family are usually able to collaborate among themselves. 
A family of products may have several variants, but the products of one variant are incompatible with products of another.


```c++
//#include "AbstractProductA.h"
#include "AbstractProductB.h"

class AbstractFactory {
public:
    virtual AbstractProductA *CreateProductA() const = 0;
    virtual AbstractProductB *CreateProductB() const = 0;
};
```


Product B is able to do its own thing.
...but it also can collaborate with the AbstractProductA.
The Abstract Factory makes sure that all products it creates are of the same variant and thus, compatible.


Since we have alredry added our Abstract Product files we will need to add our Concrete products.
we start with **ProductA1**


```c++
#include "AbstractProductA.h"
class ProductA1 : public AbstractProductA {
public:
    std::string UsefulFunctionA() const override {
        return "The result of Product A1.";
    }
};
```

next we add **ProductA2** to the same family.
```c++
#include "AbstractProductA.h"

class ProductA2 : public AbstractProductA {
    std::string UsefulFunctionA() const override {
        return "The result of Product A2.";
    }
};
```

For our next family, the B family of products we have 
The variant, **ProductB1**, is only able to work correctly with the variant, **ProductA1**. 
Nevertheless, it accepts any instance of AbstractProductA as an argument.
```c++
#include "AbstractProductB.h"

class ProductB1 : public AbstractProductB {
public:
    std::string UsefulFunction2() const override {
        return "The result of Product B1.";
    }
    std::string AnotherUsefulFunctionB(const AbstractProductA &collaborator) const override {
        const std::string result = collaborator.UsefulFunctionA();
        return "The result of B1 collaborating with ( " + result + " )";
    }
};
```

The variant, **ProductB2**, is only able to work correctly with the variant, **ProductA2**. 
Nevertheless, it accepts any instance of AbstractProductA as an argument.

```c++
#include "AbstractProductB.h"

class ProductB2 : public AbstractProductB {
public:
    std::string UsefulFunction2() const override {
        return "The result of Product B2.";
    }
    std::string AnotherUsefulFunctionB(const AbstractProductA &collaborator) const override {
        const std::string result = collaborator.UsefulFunctionA();
        return "The result of B2 collaborating with ( " + result + " )";
    }
};
```


Let's create a couple of Concrete Factories.
Concrete Factories produce a family of products that belong to a single variant. 
The factory guarantees that resulting products are compatible. 
Note that signatures of the Concrete Factory's methods return an abstract product, while inside the method a concrete product is instantiated.

We create **ConcreteFactory1**

```c++
#include "AbstractFactory.h"
#include "ProductA1.h"
#include "ProductB1.h"

class ConcreteFactory1 : public AbstractFactory {
public:
    AbstractProductA *CreateProductA() const override {
        return new ProductA1();
    }
    AbstractProductB *CreateProductB() const override {
        return new ProductB1();
    }
};
```

Each Concrete Factory has a corresponding product variant.
So we add **ConcreteFactory2**

```c++
#include "AbstractFactory.h"
#include "ProductA2.h"
#include "ProductB2.h"

class ConcreteFactory2 : public AbstractFactory {
public:
    AbstractProductA *CreateProductA() const override {
        return new ProductA2();
    }
    AbstractProductB *CreateProductB() const override {
        return new ProductB2();
    }
};
```

![Factory](/UMLs/images/AbstractFactory/AbstractFactory088.png)

Our last step is to go to the **main.cpp**.
First we add the includes that we need.
```c++
#include <iostream>

#include "ProductA1.h"
#include "ProductA2.h"

#include "ProductB1.h"
#include "ProductB2.h"

#include "ConcreteFactory1.h"
#include "ConcreteFactory2.h"
```
we next add some client code:
```c++
void Client(const AbstractFactory &factory) {
    const AbstractProductA *product_a = factory.CreateProductA();
    const AbstractProductB *product_b = factory.CreateProductB();
    std::cout << product_b->UsefulFunction2() << "\n";
    std::cout << product_b->AnotherUsefulFunctionB(*product_a) << "\n";
    delete product_a;
    delete product_b;
}
```
And the main function
```c++
int main() {
    std::cout << "Client: Testing client code with the first factory type:\n";
    ConcreteFactory1 *f1 = new ConcreteFactory1();
    Client(*f1);
    delete f1;
    std::cout << std::endl;
    std::cout << "Client: Testing the same client code with the second factory type:\n";
    ConcreteFactory2 *f2 = new ConcreteFactory2();
    Client(*f2);
    delete f2;
    return 0;
}
```
We should be ready to compile this project and when we run it ou result should be:
```run
Client: Testing client code with the first factory type:
The result of Product B1.
The result of B1 collaborating with ( The result of Product A1. )

Client: Testing the same client code with the second factory type:
The result of Product B2.
The result of B2 collaborating with ( The result of Product A2. )

```


[Wikipedia](https://en.wikipedia.org/wiki/Abstract_factory_pattern)


----------------------------------------------------------------------------------------------------

Find Ray on:

[facebook](https://www.facebook.com/TheRayCode/)

[youtube](https://www.youtube.com/user/AndradeRay/)

[The Ray Code](https://www.RayAndrade.com)

[Ray Andrade](https://www.RayAndrade.org)


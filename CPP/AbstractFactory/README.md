# TheRayCode
## Abstract Factory c++

In this article we will review the **Abstract Factory** pattern.
This pattern allows you to create a family of classes in which
the subclasses of this *family* can cooperate together.

Let's start by creating a couple of products we call **Product1** and **Product2**.

We start with **Product1** and it's subclasses. For **Product1** we have the following code:

```c++
class Product1 {
public:
    virtual Product1(){};
    virtual std::string UsefulFunctionA() const = 0;
};
```

Next we want to create a couple subclasses that we call **Product1a** and **Product2a**.
The first thing we need to do is include **Product1.h** and the extend **Product1a** with **Product1**.
Let's look at the code in **Product1a**.h.
```c++
#include "Product1.h"

class Product1a : public Product1 {
public:
    std::string UsefulFunctionA() const override {
        return "The result of the product A1.";
    }
};

```
We now want to create two classes I will call **Product2a** and **Product2a**. Both classes
will be extend with **Product1** and thus we will need to include **Product1** on both.
The code for **Product1a** will be:

```c++
#include "Product1.h"

class Product1a : public Product1 {
public:
    std::string UsefulFunctionA() const override {
        return "The result of the product A1.";
    }
};

```
and for **Product2a** we have:
```c++
#include "Product1.h"

class Product2a : public Product1 {
    std::string UsefulFunctionA() const override {
        return "The result of the product A2.";
    }
};

```

![Factory](/UMLs/images/AbstractFactory/AbstractFactory088.png)

We now move to the **B** side.

So let's create **Product2**. To **Product2** we have the following code:

```c++
class Product2 {

public:
    virtual Product2(){};
    virtual std::string UsefulFunction2() const = 0;

    virtual std::string AnotherUsefulFunctionB(const Product1 &collaborator) const = 0;
};

```
Let's now create two classes that will be extended by this class.
We first have **Product1b** and then we have **Product2b**. Both will be extended with **Product2**
We start with **Product1b**:

```c++
#include "Product2.h"

class Product1b : public Product2 {
public:
    std::string UsefulFunction2() const override {
        return "The result of the product B1.";
    }
    std::string AnotherUsefulFunctionB(const Product1 &collaborator) const override {
        const std::string result = collaborator.UsefulFunctionA();
        return "The result of the B1 collaborating with ( " + result + " )";
    }
};
```
and then we move to **Product2b**. Its code will be:
```c++
#include "Product2.h"

class Product2b : public Product2 {
public:
    std::string UsefulFunction2() const override {
        return "The result of the product B2.";
    }

    std::string AnotherUsefulFunctionB(const Product1 &collaborator) const override {
        const std::string result = collaborator.UsefulFunctionA();
        return "The result of the B2 collaborating with ( " + result + " )";
    }
};
```
now let's create the **AbstractFactory** which will house our two classes **Product1** and **Product2**
It will have the following code:
```c++
class AbstractFactory {
public:
    virtual Product1 *CreateProductA() const = 0;
    virtual Product2 *CreateProductB() const = 0;
};
```
Now let's create out Factories. We start with **Factory1**. 
We notice it is extended by the **AbstractFactory**. 
We have the following code:
```c++
#include "AbstractFactory.h"

class Factory1 : public AbstractFactory {
public:
    Product1 *CreateProductA() const override {
        return new Product1a();
    }
    Product2 *CreateProductB() const override {
        return new Product1b();
    }
};
```
We now proceed to **Factory2**. It too is extend by **AbstractFactory** thus we have the following code:
```c++
#include "AbstractFactory.h"

class Factory2 : public AbstractFactory {
public:
    Product1 *CreateProductA() const override {
        return new Product2a();
    }
    Product2 *CreateProductB() const override {
        return new Product2b();
    }
};
```
Our last step is to go to the **main.cpp**.
First we add the includes that we need.
```c++
#include <iostream>

#include "Product1a.h"
#include "Product2a.h"

#include "Product1b.h"
#include "Product2b.h"

#include "Factory1.h"
#include "Factory2.h"
```
 we next add some client code:
```c++
void ClientCode(const AbstractFactory &factory) {
    const Product1 *product_a = factory.CreateProductA();
    const Product2 *product_b = factory.CreateProductB();
    std::cout << product_b->UsefulFunction2() << "\n";
    std::cout << product_b->AnotherUsefulFunctionB(*product_a) << "\n";
    delete product_a;
    delete product_b;
}
```
our last step is to go to the main fundtion. This is the code that we need:
```c++
int main() {
    std::cout << "Client: Testing client code with the first factory type:\n";
    Factory1 *f1 = new Factory1();
    ClientCode(*f1);
    delete f1;
    std::cout << std::endl;
    std::cout << "Client: Testing the same client code with the second factory type:\n";
    Factory2 *f2 = new Factory2();
    ClientCode(*f2);
    delete f2;
    return 0;
}
```
We should be ready to compile this project and when we run it ou result should be:
```c++

Client: Testing client code with the first factory type:
The result of the product B1.
The result of the B1 collaborating with ( The result of the product A1. )

Client: Testing the same client code with the second factory type:
The result of the product B2.
The result of the B2 collaborating with ( The result of the product A2. )


```


[Wikipedia](https://en.wikipedia.org/wiki/Abstract_factory_pattern)


----------------------------------------------------------------------------------------------------

Find Ray on:

[facebook](https://www.facebook.com/TheRayCode/)

[youtube](https://www.youtube.com/user/AndradeRay/)

[The Ray Code](https://www.RayAndrade.com)

[Ray Andrade](https://www.RayAndrade.org)


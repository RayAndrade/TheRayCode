# TheRayCode
## Abstract Factory c++

In this article we will review the **Abstract Factory** pattern.
This pattern allows you to create a family of classes in which
the subclasses of this *family* can cooperate together.

Let's start by creating a couple of products we call **AbstractProductA** and **AbstractProductB**.

We start with **AbstractProductA** and it's subclasses. For **AbstractProductA** we have the following code:

```c++
class AbstractProductA {
public:
    virtual AbstractProductA(){};
    virtual std::string UsefulFunctionA() const = 0;
};
```

Next we want to create a couple subclasses that we call **ProductA1** and **ProductA2**.
The first thing we need to do is include **AbstractProductA.h** and the extend **ProductA1** with **AbstractProductA**.
Let's look at the code in **ProductA1**.h.
```c++
#include "AbstractProductA.h"

class ProductA1 : public AbstractProductA {
public:
    std::string UsefulFunctionA() const override {
        return "The result of the product A1.";
    }
};

```
We now want to create two classes I will call **ProductA2** and **ProductA2**. Both classes
will be extend with **AbstractProductA** and thus we will need to include **AbstractProductA** on both.
The code for **ProductA1** will be:

```c++
#include "AbstractProductA.h"

class ProductA1 : public AbstractProductA {
public:
    std::string UsefulFunctionA() const override {
        return "The result of the product A1.";
    }
};

```
and for **ProductA2** we have:
```c++
#include "AbstractProductA.h"

class ProductA2 : public AbstractProductA {
    std::string UsefulFunctionA() const override {
        return "The result of the product A2.";
    }
};

```

![Factory](/UMLs/images/AbstractFactory/AbstractFactory088.png)

We now move to the **B** side.

So let's create **AbstractProductB**. To **AbstractProductB** we have the following code:

```c++
class AbstractProductB {

public:
    virtual AbstractProductB(){};
    virtual std::string UsefulFunction2() const = 0;

    virtual std::string AnotherUsefulFunctionB(const AbstractProductA &collaborator) const = 0;
};

```
Let's now create two classes that will be extended by this class.
We first have **ProductB1** and then we have **ProductB2**. Both will be extended with **AbstractProductB**
We start with **ProductB1**:

```c++
#include "AbstractProductB.h"

class ProductB1 : public AbstractProductB {
public:
    std::string UsefulFunction2() const override {
        return "The result of the product B1.";
    }
    std::string AnotherUsefulFunctionB(const AbstractProductA &collaborator) const override {
        const std::string result = collaborator.UsefulFunctionA();
        return "The result of the B1 collaborating with ( " + result + " )";
    }
};
```
and then we move to **ProductB2**. Its code will be:
```c++
#include "AbstractProductB.h"

class ProductB2 : public AbstractProductB {
public:
    std::string UsefulFunction2() const override {
        return "The result of the product B2.";
    }

    std::string AnotherUsefulFunctionB(const AbstractProductA &collaborator) const override {
        const std::string result = collaborator.UsefulFunctionA();
        return "The result of the B2 collaborating with ( " + result + " )";
    }
};
```
now let's create the **AbstractFactory** which will house our two classes **AbstractProductA** and **AbstractProductB**
It will have the following code:
```c++
class AbstractFactory {
public:
    virtual AbstractProductA *CreateProductA() const = 0;
    virtual AbstractProductB *CreateProductB() const = 0;
};
```
Now let's create out Factories. We start with **ConcreteFactory1**. 
We notice it is extended by the **AbstractFactory**. 
We have the following code:
```c++
#include "AbstractFactory.h"

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
We now proceed to **ConcreteFactory2**. It too is extend by **AbstractFactory** thus we have the following code:
```c++
#include "AbstractFactory.h"

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
our last step is to go to the main fundtion. This is the code that we need:
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


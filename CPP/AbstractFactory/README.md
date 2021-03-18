# TheRayCode
## Abstract Factory c++

In this article we will review the **Abstract Factory** pattern.
This pattern allows you to create a family of classes in which
the subclasses of this *family* can cooperate together.

Let's start by creating a couple of products we call **ProductA** and **ProductB**.

We start with **ProductA** and it's subclasses. For **ProductA** we have the following code:

```c++
class ProductA {
public:
    virtual ~ProductA(){};
    virtual std::string UsefulFunctionA() const = 0;
};
```

Next we want to create a couple subclasses that we call **ProductA1** and **ProductA2**.
The first thing we need to do is include **ProductA.h** and the extend **ProductA1** with **ProductA**.
Let's look at the code in **ProductA1**.h.
```c++
#include "ProductA.h"

class ProductA1 : public ProductA {
public:
    std::string UsefulFunctionA() const override {
        return "The result of the product A1.";
    }
};

```
We now want to create two classes I will call **ProductA2** and **ProductA2**. Both classes
will be extend with **ProductA** and thus we will need to include **ProductA** on both.
The code for **ProductA1** will be:

```c++
#include "ProductA.h"

class ProductA1 : public ProductA {
public:
    std::string UsefulFunctionA() const override {
        return "The result of the product A1.";
    }
};

```
and for **ProductA2** we have:
```c++
#include "ProductA.h"

class ProductA2 : public ProductA {
    std::string UsefulFunctionA() const override {
        return "The result of the product A2.";
    }
};

```

![Factory](/UMLs/images/AbstractFactory088.png)

We now move to the **B** side.

So let's create **ProductB**. To **ProductB** we have the following code:

```c++
class ProductB {

public:
    virtual ~ProductB(){};
    virtual std::string UsefulFunctionB() const = 0;

    virtual std::string AnotherUsefulFunctionB(const ProductA &collaborator) const = 0;
};

```
Let's now create two classes that will be extended by this class.
We first have **ProductB1** and then we have **ProductB2**. Both will be extended with **ProductB**
We start with **ProductB1**:

```c++
#include "ProductB.h"

class ProductB1 : public ProductB {
public:
    std::string UsefulFunctionB() const override {
        return "The result of the product B1.";
    }
    std::string AnotherUsefulFunctionB(const ProductA &collaborator) const override {
        const std::string result = collaborator.UsefulFunctionA();
        return "The result of the B1 collaborating with ( " + result + " )";
    }
};
```
and then we move to **ProductB2**. Its code will be:
```c++
#include "ProductB.h"

class ProductB2 : public ProductB {
public:
    std::string UsefulFunctionB() const override {
        return "The result of the product B2.";
    }

    std::string AnotherUsefulFunctionB(const ProductA &collaborator) const override {
        const std::string result = collaborator.UsefulFunctionA();
        return "The result of the B2 collaborating with ( " + result + " )";
    }
};
```
now let's create the **AbstractFactory** which will house our two classes **ProductA** and **ProductB**
It will have the following code:
```c++
class AbstractFactory {
public:
    virtual ProductA *CreateProductA() const = 0;
    virtual ProductB *CreateProductB() const = 0;
};
```
Now let's create out Factories. We start with **Factory1**. 
We notice it is extended by the **AbstractFactory**. 
We have the following code:
```c++
#include "AbstractFactory.h"

class Factory1 : public AbstractFactory {
public:
    ProductA *CreateProductA() const override {
        return new ProductA1();
    }
    ProductB *CreateProductB() const override {
        return new ProductB1();
    }
};
```
We now proceed to **Factory2**. It too is extend by **AbstractFactory** thus we have the following code:
```c++
#include "AbstractFactory.h"

class Factory2 : public AbstractFactory {
public:
    ProductA *CreateProductA() const override {
        return new ProductA2();
    }
    ProductB *CreateProductB() const override {
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

#include "Factory1.h"
#include "Factory2.h"
```
 we next add some client code:
```c++
void ClientCode(const AbstractFactory &factory) {
    const ProductA *product_a = factory.CreateProductA();
    const ProductB *product_b = factory.CreateProductB();
    std::cout << product_b->UsefulFunctionB() << "\n";
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


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

Now I will create a file I call **Product.h**.

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

Now we create an interface I call **Creator**. The code for this file will be.

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

we need to include Product also

```c++
#include "Product.h"
```
__________________________________________________________________

let's create a *class* called **CreatorA** 

```c++
class CreatorA{ };
```
we will extend it with the **Creator** *class*

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

































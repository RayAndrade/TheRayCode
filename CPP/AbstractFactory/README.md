# The Ray Code #
In this article we will review the **Abstract Factory** pattern.
This pattern allows us to create a family of classes in which
the subclasses of this *family* can cooperate together.

Let's start by creating a couple of products we call **ProductA** and **ProductB**.

For **ProductA** we have the following code:

```c++
class ProductA {
public:
    virtual ~ProductA(){};
    virtual std::string UsefulFunctionA() const = 0;
};
```
Each distinct product of a product family should have a base interface. All 
*variants* of the product must implement this interface.

Sol let's 

Likewise we create a **ProductB** to add to our project.
It will have the following code:
```c++

```


**Factory**

using C++

We create the progect with the following C++ files. 

This is the order we create them:

**Product**.h

**ConcreteProduct1**.h

**ConcreteProduct2**.h

**Creator**.h

**ConcreteCreator1**.h

**ConcreteCreator2**.h



[link to RayAndrade.com](http://RayAndrade.com)

[link to RayAndrade.org](http://RayAndrade.org)

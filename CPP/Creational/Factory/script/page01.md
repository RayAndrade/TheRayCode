The Factory Method pattern is a *creational design pattern* that provides an interface for creating objects in the same **superclass**
It allows the subclasses to alter the type of classes objets that will be created.

Let's start coding:

The Factory Method pattern is a creational design pattern that provides an interface for creating objects in the same superclass It allows the subclasses to alter the type of classes objets that will be created.

We will create an interface for our toys and the it will hold all the toys and they will be of the same type.

Let's create interface and call it **Toy**. In this *interface* we will define the methods that we will require for each Toy. Also all the toys will be of the SAME type.

In each one of our toys we will need to use the **iostream** so we may use the standard out to print to the screen. Since all the toys will be of the same and use sdt out, 
we can include the **iostream** and it will included in each our classes and this interface in each.

We will have both the name and the price be protected varables, and some methods that will be required for each class.

New header 
```
Toy
```

add **iostream**

```
#include <iostream>
```

Add class

```
class Toy {  }
```

add protected varables

```
protected:
    std::string name;
    float price;
```

Add the requiered methods

```
public:
    virtual void prepareParts()  = 0;
    virtual void combineParts()  = 0;
    virtual void assembleParts() = 0;
    virtual void applyLabel()    = 0;
    virtual void showProduct()   = 0;
```    

your code should look like:

```cpp
#include <iostream>

class Toy {
protected:
    std::string name;
    float price;
public:
    virtual void prepareParts()  = 0;
    virtual void combineParts()  = 0;
    virtual void assembleParts() = 0;
    virtual void applyLabel()    = 0;
    virtual void showProduct()   = 0;
};
```

[page 02](./page02.md)





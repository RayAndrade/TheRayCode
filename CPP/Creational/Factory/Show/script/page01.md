The Factory Method pattern is a *creational design pattern* that provides an interface for creating objects in the same **superclass**
It allows the subclasses to alter the type of classes objets that will be created.

Let's start coding:

```
Toy
```


```
#include <iostream>
```


```
protected:
    std::string name;
    float price;
```


```
public:
    virtual void prepareParts()  = 0;
    virtual void combineParts()  = 0;
    virtual void assembleParts() = 0;
    virtual void applyLabel()    = 0;
    virtual void showProduct()   = 0;
```






[page 02](./page02.md)





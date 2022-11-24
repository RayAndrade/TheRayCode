[back](./page01.md)

We will create an *interface* for our toys and the it will hold all the toys and they will be of the **same type**.

Let's create interface and call it **Toy**. In this interface we will define the methods we require of each **Toy**.
Also all the toys will be of the SAME type.

```cpp
class Toy { };
```
In each one of our toys we will need to use the **iostream** so we may use the standard out to print to the screen. Since all the toys will be of the
same type we can include the **iostream** here so that when we include each class this interface, it will be included also. 

We will include the *iostream* here in this interface (or class) and each or our toy will requier this *include* so each toy will have access to this include.
```cpp
#include <iostream>
```

we will have both the name and the price be protected varables:
```cpp
  protected:
    std::string name;
    float price;
```
Then we add some methods that will be required for each class
```cpp
  public:
    virtual void prepareParts()  = 0;
    virtual void combineParts()  = 0;
    virtual void assembleParts() = 0;
    virtual void applyLabel()    = 0;
    virtual void showProduct()   = 0;
```

Now let's create our toys.. I sorta feel like santas elf.

<hr/>

Our code should look like:

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

[to slide 3](./page03.md)

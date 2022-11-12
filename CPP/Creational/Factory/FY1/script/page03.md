[back](./page02.md)

Now let create some toys
Now let's create our first toy the **Bike**. We include the Toy interface 

```cpp
#include "Toy.h"
```
now we can extend this class with the toy interface and the requaired methods
```cpp
  class Bike : public Toy{

public:
    void prepareParts() { std::cout<< "Preparing Bike Parts" <<std::endl; };
    void combineParts() { std::cout<< "combining Bike Parts" <<std::endl; };
    void assembleParts() { std::cout<< "Assembling Bike Parts" <<std::endl; };
    void applyLabel()  { std::cout<< "Preparing Bike Label " <<std::endl; name = "Applying Bike Label"; price = 10; };
    void showProduct() { std::cout<< "Preparing Bike Parts" <<std::endl; };

};
```
We have our required methods: **prepareParts**, **combineParts**, **assembleParts**, ***applyLabel**,  and **showProduct**.

Our interface should look like :

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

[to slide 4](./page04.md)



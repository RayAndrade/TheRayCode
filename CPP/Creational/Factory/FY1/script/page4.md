[back](./page3.md)

Now let's create a class for **Car**. It too is extended with the **Toy** interface.
```cpp
  #include "Toy.h"

class Car : public Toy{
public:
    void prepareParts() { std::cout<< "Preparing Car Parts" <<std::endl; };
    void combineParts() { std::cout<< "combining Car Parts" <<std::endl; };
    void assembleParts() { std::cout<< "Assembling Car Parts" <<std::endl; };
    void applyLabel()  { std::cout<< "Preparing Car Label " <<std::endl; name = "Applying Car Label"; price = 10; };
    void showProduct() { std::cout<< "Preparing Car Parts" <<std::endl; };
};
```

As you can see all the required methods.

[to slide 5](./page5.md)



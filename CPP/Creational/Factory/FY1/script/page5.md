[back](./page4.md)

Next we create the **Plane** class.  The code for the plane class looks like:
```cpp
  #include "Toy.h"

class Plane : public Toy{

public:
    void prepareParts() { std::cout<< "Preparing Plane Parts" <<std::endl; };
    void combineParts() { std::cout<< "combining Plane Parts" <<std::endl; };
    void assembleParts() { std::cout<< "Assembling Plane Parts" <<std::endl; };
    void applyLabel()  { std::cout<< "Preparing Plane Label " <<std::endl; name = "Applying Plane Label"; price = 10; };
    void showProduct() { std::cout<< "Preparing Plane Parts" <<std::endl; };
};
```
[page6](./page6.md)

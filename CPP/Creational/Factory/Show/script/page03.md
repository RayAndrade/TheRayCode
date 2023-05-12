[back](./page02.md)

Now let create some toys
Now let's create our first toy the **Bike**. We include the Toy interface 

```
Bike  Bike {  };
```

```
class 
```


```cpp
#include "Toy.h"
```
now we can extend this class with the toy interface and the requaired methods
```cpp
 : public Toy
```

```
void prepareParts() { std::cout<< "Preparing Bike Parts" <<std::endl; };
void combineParts() { std::cout<< "combining Bike Parts" <<std::endl; };
void assembleParts() { std::cout<< "Assembling Bike Parts" <<std::endl; };
void applyLabel()  { std::cout<< "Preparing Bike Label " <<std::endl; name = "Applying Bike Label"; price = 10; };
void showProduct() { std::cout<< "Preparing Bike Parts" <<std::endl; };
```


Our required methods are: **prepareParts**, **combineParts**, **assembleParts**, ***applyLabel**,  and **showProduct**.


[to slide 4](./page04.md)



The Factory Method pattern is a creational design pattern that provides an interface for creating objects in the same superclass It allows the subclasses to alter the type of classes objets that will be created.

We will create an interface for our toys and the it will hold all the toys and they will be of the same type.

Let's create interface and call it **Toy**. In this *interface* we will define the methods that we will require for each Toy. Also all the toys will be of the SAME type.

In each one of our toys we will need to use the **iostream** so we may use the standard out to print to the screen. Since all the toys will be of the same and use sdt out, 
we can include the **iostream** and it will included in each our classes and this interface in each.

We will have both the name and the price be protected varables, and some methods that will be required for each class.

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
Now let's create our first toy the **Bike**. We include the **Toy** interface.
We can extend this class with the toy interface/class and add the requaired methods.
Our required methods are: **prepareParts**, **combineParts**, **assembleParts**, **applyLabel**, and **showProduct**.
 
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

Now let's create a class for **Car**. It too is extended with the **Toy** *interface*.

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

As you can see all the required methods. Next we create the **Plane** *class*. The code for the plane class looks like:

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

Now Let's create an *interface/class*  that will to allow all the toys to be of the same class, Let's call it **SantasBag**

This class doesn't need any logic.

```cpp
#include "Plane.h"
#include "Bike.h"
#include "Car.h"

class SantasBag{

};

```

Now let's create a **ToyFactory**. We will use a *switch* statement to prompt the user for the desired **Toy** type.


```cpp
#include "SantasBag.h"

class ToyFactory{
public:
    static Toy * createToy(int type){
        Toy *toy = NULL;

        switch(type){
            case 1:{
                toy = new Car;
                break;
            }
            case 2:{
                toy = new Bike;
                break;
            }
            case 3:{
                toy = new Plane;
                break;
            }
            default:{
                std::cout << "Invalid toy type please re-enter type" << std::endl;
                return NULL;
            }
        }
        toy->prepareParts();
        toy->combineParts();
        toy->assembleParts();
        toy->applyLabel();
        return toy;
    }
};
```



If the choioce os not 1, 2 or 3, the program defaiults to messaging to invalid selection. If zero is chosen the routine is exited.

Let's put this together in the **main** method.

```cpp 
#include "ToyFactory.h"

int main() {
// client code starts

    int type;
    while(1){
        std::cout << "1 Car, 2 Bike, 3 Plane Enter type or Zero for exit" << std::endl;
        std::cin >> type;
        if(!type)
            break;
        Toy *v = ToyFactory::createToy(type);
        if(v){
            v->showProduct();
            delete v;
        }
    }
    std::cout << "Exit...";


//Client code ends
    return 0;
}

```

Now let's copile our project and we should get:

```run

1 Car, 2 Bike, 3 Plane Enter type or Zero for exit
1
Preparing Car Parts
combining Car Parts
Assembling Car Parts
Preparing Car Label 
Preparing Car Parts
1 Car, 2 Bike, 3 Plane Enter type or Zero for exit
2
Preparing Bike Parts
combining Bike Parts
Assembling Bike Parts
Preparing Bike Label 
Preparing Bike Parts
1 Car, 2 Bike, 3 Plane Enter type or Zero for exit
3
Preparing Plane Parts
combining Plane Parts
Assembling Plane Parts
Preparing Plane Label 
Preparing Plane Parts
1 Car, 2 Bike, 3 Plane Enter type or Zero for exit
4
Invalid toy type please re-enter type
1 Car, 2 Bike, 3 Plane Enter type or Zero for exit
0
Exit...
Process finished with exit code 0

```

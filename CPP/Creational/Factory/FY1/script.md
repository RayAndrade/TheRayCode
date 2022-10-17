We start by creating an interface for the toys. This will bake all the toys will be of the same type.

```cpp
class Toy { };
```
in each of our toys we will need to use the **iostream** so we may use the standard out to print to the screen.
```cpp
#include <iostream>
```

we have the name and the price protected varables:
```cpp
protected:
    std::string name;
    float price;
```
we add some methods that will be required of each class
```cpp
public:
    virtual void prepareParts()  = 0;
    virtual void combineParts()  = 0;
    virtual void assembleParts() = 0;
    virtual void applyLabel()    = 0;
    virtual void showProduct()   = 0;
```
Now let's create our first toy the **Bike**. We include the Toy interface.

```cpp
#include "Toy.h"
```
now we can extend this class with the toy interface
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

Next we create the **Plane** class.  The code for the plane class looks like:
```cpp
#include "Toy.h";

class Plane : public Toy{
    // make all constructor privater or protected

public:
    void prepareParts() { std::cout<< "Preparing Plane Parts" <<std::endl; };
    void combineParts() { std::cout<< "combining Plane Parts" <<std::endl; };
    void assembleParts() { std::cout<< "Assembling Plane Parts" <<std::endl; };
    void applyLabel()  { std::cout<< "Preparing Plane Label " <<std::endl; name = "Applying Plane Label"; price = 10; };
    void showProduct() { std::cout<< "Preparing Plane Parts" <<std::endl; };
};
```
Now Let's create an interface for are to to allow them be of the same class, **Toys**.

```
#include "Plane.h"
#include "Bike.h"
#include "Car.h"

class Toys{

};
```
Here we just group the toys under the same interface.


Now to create each one of theses objecet I create a **ToyFactory**. The toy factory consist of a switch statement that will swithc to the desired type of **Toy**

```cpp
#include "Toys.cpp"

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

If the choioce os not 1, 2 or 3, the program defaiults to messaging to invalid selection.
If zero is chosen the routine is exited.

Let's put this together in the nain method.

```cpp
#include "ToyFactory.cpp"

int main() {
// client code starts
    int type;
    while(1){
        std::cout << "Enter type of Zero for exit" << std::endl;
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
Now we are ready to compile and run.
here is our run:

```run
Enter type of Zero for exit
1
Preparing Car Parts
combining Car Parts
Assembling Car Parts
Preparing Car Label 
Preparing Car Parts
Enter type of Zero for exit
2
Preparing Plane Parts
combining Plane Parts
Assembling Plane Parts
Preparing Plane Label 
Preparing Plane Parts
Enter type of Zero for exit
3
Preparing Plane Parts
combining Plane Parts
Assembling Plane Parts
Preparing Plane Label 
Preparing Plane Parts
Enter type of Zero for exit
4
Invalid toy type please re-enter type
Enter type of Zero for exit
0
Exit...
Process finished with exit code 0

```




































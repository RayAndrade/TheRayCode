# TheRayCode
## Builder cpp

In this artical I will take a look at the **Builder** design pattern using *c++*.


Builder
SolidBuilder
Director
Product

```cpp
#include "Director.h"
#include "SolidBuilder.h"

void ClientCode(Director& director)
{
    SolidBuilder* builder = new SolidBuilder();
    director.set_builder(builder);
    std::cout << "Standard basic product:\n";
    director.BuildMinimalViableProduct();

    Product* p= builder->GetProduct();
    p->ListParts();
    delete p;

    std::cout << "Custom product:\n";
    builder->ProducePartA();
    builder->ProducePartC();
    p=builder->GetProduct();
    p->ListParts();
    delete p;

}
```
And lastly we have main method
```cpp
int main(){

    Director* director= new Director();
    ClientCode(*director);
    delete director;


    std::cout << "The Ray Code is AWESOME!!!\n\n";
    return 0;
}
```
The last ting to do is just to compile and run.
Your result should be:
```
Standard basic product:
Product parts: PartA

Custom product:
Product parts: PartA, PartC

```
----------------------------------------------------------------------------------------------------

Find Ray on:

[facebook](https://www.facebook.com/TheRayCode/)

[youtube](https://www.youtube.com/user/AndradeRay/)

[The Ray Code](https://www.RayAndrade.com)

[Ray Andrade](https://www.RayAndrade.org)








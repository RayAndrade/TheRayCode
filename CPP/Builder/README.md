# TheRayCode
## Builder cpp

The Builder pattern can be recognized in a class, which has a single creation method and several methods to configure the resulting object. 

This example illustrates the structure of the Builder design pattern. 
It focuses on answering these questions:
* What classes does it consist of?
* What roles do these classes play?
* In what way do the elements of the pattern related?

It makes sense to use the Builder pattern only when your products are quite complex and require extensive configuration.
Unlike in other creational patterns, different concrete builders can produce unrelated products. 
In other words, results of various builders may not always follow the same interface.

Let's create a class called **Product**.
The code for **Product**.h will be:
```c++
#include <vector>

class Product {
public:
    std::vector<std::string> parts_;
    void ListParts()const{
        std::cout << "Product parts: ";
        for (size_t i=0;i<parts_.size();i++){
            if(parts_[i]== parts_.back()){
                std::cout << parts_[i];
            }else{
                std::cout << parts_[i] << ", ";
            }
        }
        std::cout << "\n\n";
    }
};
```
The Builder interface specifies methods for creating the different parts of the **Product** objects.
The code for the **Builder**.h is:
```c++
class Builder {
public:
    virtual ~Builder(){}
    virtual void ProducePartA() const =0;
    virtual void ProducePartB() const =0;
    virtual void ProducePartC() const =0;

};
```
The Concrete (Solid) Builder classes follows the Builder interface and provide specific implementations of the building steps. 
Your program may have several variations of *Builders* , implemented differently.
```c++
#include "Builder.h"
#include "Product.h"

class SolidBuilder: public Builder {
private:
    Product* product;
public:
    SolidBuilder(){
        this->Reset();
    }
    ~SolidBuilder(){
        delete product;
    }
    void Reset(){
        this->product= new Product();
    }
    void ProducePartA()const override{
        this->product->parts_.push_back("PartA");
    }
    void ProducePartB()const override{
        this->product->parts_.push_back("PartB");
    }
    void ProducePartC()const override{
        this->product->parts_.push_back("PartC");
    }
    Product* GetProduct() {
        Product* result= this->product;
        this->Reset();
        return result;
    }

};
```
Now let's create a class called **Director**.
The code for our **Director**.h will be:
```c++
#include "Builder.h"

class Director {
private:
    Builder* builder;
public:
    void set_builder(Builder* builder){
        this->builder=builder;
    }
    void BuildMinimalViableProduct(){
        this->builder->ProducePartA();
    }
    void BuildFullFeaturedProduct(){
        this->builder->ProducePartA();
        this->builder->ProducePartB();
        this->builder->ProducePartC();
    }
};
```
The last place we go to will be the **main** method to run our demonsyration.

Let's add some files to include:
```c++
#include <iostream>

#include "Director.h"
#include "SolidBuilder.h"
```

Then we add some client code:
```c++
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
And now let's test this all out in main

```c++
int main(){
    Director* director= new Director();
    ClientCode(*director);
    delete director;
    return 0;
}
```
When we compile and run we should get:

```
Standard basic product:
Product parts: PartA

Custom product:
Product parts: PartA, PartC

```
The Ray code is AWESOME!!!

----------------------------------------------------------------------------------------------------

[wikipedia](https://en.wikipedia.org/wiki/Builder_pattern)

Find Ray on:

[facebook](https://www.facebook.com/TheRayCode/)

[youtube](https://www.youtube.com/user/AndradeRay/)

[The Ray Code](https://www.RayAndrade.com)

[Ray Andrade](https://www.RayAndrade.org)








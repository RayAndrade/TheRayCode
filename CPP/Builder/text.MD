We start by creating a project I call Show for my demo show.
I'm choosing C++23

The **Builder** interface specifies methods for creating the different parts of the Product objects.

```c++
class Builder{
public:
    virtual ~Builder(){}
    virtual void ProducePartA() const =0;
    virtual void ProducePartB() const =0;
    virtual void ProducePartC() const =0;
};
```
Create **Product**.

/**
 * It makes sense to use the Builder pattern only when your products are quite
 * complex and require extensive configuration.
 *
 * Unlike in other creational patterns, different concrete builders can produce
 * unrelated products. In other words, results of various builders may not
 * always follow the same interface.
 */

```c++
#include <vector>
#include <string>
#include <iostream>

class Product{
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

The **Director** is only responsible for executing the building steps in a
particular sequence. It is helpful when producing products according to a
specific order or configuration. Strictly speaking, the Director class is
optional, since the client can control builders directly.

```c++
#include "Builder.h"

class Director{
private:
    Builder* builder;
};    
```
The Director works with any builder instance that the client code passes
to it. This way, the client code may alter the final type of the newly
assembled product.

```c++
public:
    void set_builder(Builder* builder){
        this->builder=builder;
    }
```
The Director can construct several product variations using the same  building steps.
```
    void BuildMinimalViableProduct(){
        this->builder->ProducePartA();
    }
    void BuildFullFeaturedProduct(){
        this->builder->ProducePartA();
        this->builder->ProducePartB();
        this->builder->ProducePartC();
    }
```
Next we add the **ConcreteBuilder**.


/**
 * The Concrete Builder classes follow the Builder interface and provide
 * specific implementations of the building steps. Your program may have several
 * variations of Builders, implemented differently.
 */
```c++ 
#include "Director.h"
#include "Product.h"
 
class ConcreteBuilder : public Builder{
private:
    Product* product;
```
A fresh builder instance should contain a blank product object, which is  used in further assembly.
```c++
public:
    ConcreteBuilder(){
        this->Reset();
    }
    ~ConcreteBuilder(){
        delete product;
    }
    void Reset(){
        this->product= new Product();
    }
```

All production steps work with the same product instance.
```c++
    void ProducePartA()const override{
        this->product->parts_.push_back("PartA1");
    }
    void ProducePartB()const override{
        this->product->parts_.push_back("PartB1");
    }
    void ProducePartC()const override{
        this->product->parts_.push_back("PartC1");
    }
```
Concrete Builders are supposed to provide their own methods for  retrieving results. That's because various types of builders may create
entirely different products that don't follow the same interface.
Therefore, such methods cannot be declared in the base Builder interface (at least in a statically typed programming language). 
Note that PHP is a  dynamically typed language and this method CAN be in the base interface.

However, we won't declare it there for the sake of clarity.
Usually, after returning the end result to the client, a builder instance  is expected to be ready to start producing another product. 
That's why  it's a usual practice to call the reset method at the end of the  `getProduct` method body. However, this behavior is not mandatory, and
you can make your builders wait for an explicit reset call from the client code before disposing of the previous result.


Please be careful here with the memory ownership. Once you call  GetProduct the user of this function is responsable to release this
memory. Here could be a better option to use smart pointers to avoid  memory leaks

```c++
    Product* GetProduct() {
        Product* result= this->product;
        this->Reset();
        return result;
    }
```

The client code creates a builder object, passes it to the director and then
initiates the construction process. The end result is retrieved from the
builder object.

I used raw pointers for simplicity however you may prefer to use smart
pointers here

in the **main.cpp** we replace the iostream with
```c++
#include "Product.h"
#include "ConcreteBuilder.h"
```
add some client code
```c++
void ClientCode(Director& director)
{
    ConcreteBuilder* builder = new ConcreteBuilder();
    director.set_builder(builder);
    std::cout << "Standard basic product:\n";
    director.BuildMinimalViableProduct();

    Product* p= builder->GetProduct();
    p->ListParts();
    delete p;

    std::cout << "Standard full featured product:\n";
    director.BuildFullFeaturedProduct();

    p= builder->GetProduct();
    p->ListParts();
    delete p;

    std::cout << "Custom product:\n";
    builder->ProducePartA();
    builder->ProducePartC();
    p=builder->GetProduct();
    p->ListParts();
    delete p;

    delete builder;
}
```
Remember, the Builder pattern can be used without a Director class.
```c++
int main(){
    Director* director= new Director();
    ClientCode(*director);
    delete director;
    return 0;
}
```



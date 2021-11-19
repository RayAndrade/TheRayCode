we start by creating the Builder interface.
we create the class
```c+
class Product{ };
```
add a deconstucter

```c+
public:
    virtual ~Builder(){}
```
add each Producer one at a time

```c+
virtual void ProducePartA() const=0;
virtual void ProducePartB() const=0;
virtual void ProducePartC() const=0;
```
create the Product class file

inculde the vector class
```c+
#include <vector>
```
create the Product class code

```c+
class Product{ }
```

seperate the {}
place the use of the vector include.

```c+
public
    std::vector<std::string> parts_;
    void ListParts()const{ }
```
seperate the {} and add:
```c+
std::cout << "Product parts: ";
    for (size_t i=0;i<parts_.size();i++){
        if(parts_[i]== parts_.back()){
            std::cout << parts_[i];
        }else{
            std::cout << parts_[i] << ", ";
        }
    }
    std::cout << "\n\n";
```

next we create the Director .h file we include the Builder .h file

```c++
#include "Builder.h"
```
we create the class

```c
class Director{ };
```
seperate { }; and add a private pointer of Builder type.
```c++
private:
    Builder* builder;
```

we set the Buider poiner

```c++
void set_builder(Builder* builder){
    this->builder=builder;
}
```

The Director can construct several product variations using the same  building steps.


```c++
void BuildMinimalViableProduct(){
    this->builder->ProducePartA();
}

void BuildFullFeaturedProduct(){
    this->builder->ProducePartA();
    this->builder->ProducePartB();
    this->builder->ProducePartC();
}
```

create the ConcreteBuilder .h file  and include Builder .h file

```c++
#include "Builder.h"
```
The Director is only responsible for executing the building steps in a
 * particular sequence. It is helpful when producing products according to a
 * specific order or configuration. Strictly speaking, the Director class is
 * optional, since the client can control builders directly.
Next we extend the Director class with the Builder class

```c++
class Director{ };
```
seperate { };

create a private instance of Builder

```c++
private:
    Builder* builder;
```

The Director works with any builder instance that the client code passes to it. 
This way, the client code may alter the final type of the newly assembled product.


```c++
public:
    void set_builder(Builder* builder){
        this->builder=builder;
    }
```

The Director can construct several product variations using the same  building steps.

```c++
void BuildMinimalViableProduct(){
    this->builder->ProducePartA();
}

void BuildFullFeaturedProduct(){
    this->builder->ProducePartA();
    this->builder->ProducePartB();
    this->builder->ProducePartC();
}
```
Next we to create the ConcreteBuilder..
we include the Director and the Product header files
```c++
#include "Director.h"
#include "Product.h"
```
extend the ConcreteBuilder with the Builder class
```c++
class ConcreteBuilder : public Builder{ };
```
seperate { }; add the private refernce to the product

```c++
private:
    Product* product;
```
A fresh builder instance should contain a blank product object, which is* used in further assembly.


```c+
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

```c+
void ProducePartA()const override{
    this->product->parts_.push_back("PartA1");
}
```

create B and C

Please be careful here with the memory ownership. 
Once you call GetProduct the user of this function is responsable to release this  memory. 
Here could be a better option to use smart pointers to avoid memory leaks

```c++
Product* GetProduct() {
    Product* result= this->product;
    this->Reset();
    return result;
}
```

now let's go to main, we include the files just create
```c++
#include "Product.h"
#include "ConcreteBuilder.h"
```
we add some client code
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

    // Remember, the Builder pattern can be used without a Director class.
    std::cout << "Custom product:\n";
    builder->ProducePartA();
    builder->ProducePartC();
    p=builder->GetProduct();
    p->ListParts();
    delete p;

    delete builder;
}

```


and no we are ready to demo in main


```c++
Director* director= new Director();
ClientCode(*director);
delete director;
```

compile and run should get

```run
Standard basic product:
Product parts: PartA1

Standard full featured product:
Product parts: PartA1, PartB1, PartC1

Custom product:
Product parts: PartA1, PartC1
```

















































```c++
```




















































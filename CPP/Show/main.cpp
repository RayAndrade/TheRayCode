#include <iostream>
#include "Director.h"
#include "ConcreteBuilder.h"
#include "Product.h"


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
    builder->PartA();
    builder->PartC();
    p=builder->GetProduct();
    p->ListParts();
    delete p;
    delete builder;
}



int main(){
    Director* director= new Director();
    ClientCode(*director);
    delete director;
     //std::cout << "The Ray Code is AWESOME!!!" << std::endl;
    return 0;
}
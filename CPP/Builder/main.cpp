#include <iostream>

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

}


int main(){

    Director* director= new Director();
    ClientCode(*director);
    delete director;


    //std::cout << "The Ray Code is AWESOME!!!\n\n";
    return 0;
}




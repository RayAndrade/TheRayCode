#include <iostream>
#include "Director.h"
#include "SolidBuilder.h"

void Client(Director& director)
{
    SolidBuilder* builder = new SolidBuilder();
    director.set_builder(builder);
    std::cout << "Standard basic product:\n";
    director.BuildMinimalViableProduct();

    Product* p= builder->GetProduct();
    p->ListParts();
    delete p;

    std::cout << "Custom product:\n";
    builder->PartA();
    builder->PartC();
    p=builder->GetProduct();
    p->ListParts();
    delete p;

}

int main(){
    Director* director= new Director();
    Client(*director);
    delete director;
    //std::cout << "The Ray Code is AWESOME!!!" << std::endl;
    return 0;
}




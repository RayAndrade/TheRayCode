#include "Product.h"
#include "ConcreteBuilder.h"

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
int main() {
    Director* director= new Director();
    ClientCode(*director);
    delete director;
    return 0;
}

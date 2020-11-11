#include <iostream>

#include "AbstractProductA.h"
#include "AbstractProductB.h"

#include "AbstractFactory.h"
#include "SolidFactory1.h"
#include "SolidFactory2.h"


void ClientCode(const AbstractFactory &factory) {
    const AbstractProductA *product_a = factory.CreateProductA();
    const AbstractProductB *product_b = factory.CreateProductB();
    std::cout << product_b->UsefulFunctionB() << "\n";
    std::cout << product_b->AnotherUsefulFunctionB(*product_a) << "\n";
    delete product_a;
    delete product_b;
}

int main() {
    std::cout << std::endl;
    std::cout << "Client: Testing client code with the first factory type:\n";
    SolidFactory1 *f1 = new SolidFactory1();
    ClientCode(*f1);
    delete f1;
    std::cout << std::endl;
    std::cout << "Client: Testing the same client code with the second factory type:\n";
    SolidFactory2 *f2 = new SolidFactory2();
    ClientCode(*f2);
    delete f2;
    return 0;
}

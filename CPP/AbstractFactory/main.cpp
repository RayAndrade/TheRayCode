#include <iostream>

#include <iostream>

#include "ProductA1.h"
#include "ProductA2.h"

#include "ProductB1.h"
#include "ProductB2.h"

#include "ConcreteFactory1.h"
#include "ConcreteFactory2.h"

void Client(const AbstractFactory &factory) {
    const AbstractProductA *product_a = factory.CreateProductA();
    const AbstractProductB *product_b = factory.CreateProductB();
    std::cout << product_b->UsefulFunction2() << "\n";
    std::cout << product_b->AnotherUsefulFunctionB(*product_a) << "\n";
    delete product_a;
    delete product_b;
}

int main() {
    std::cout << "Client: Testing client code with the first factory type:\n";
    ConcreteFactory1 *f1 = new ConcreteFactory1();
    Client(*f1);
    delete f1;
    std::cout << std::endl;
    std::cout << "Client: Testing the same client code with the second factory type:\n";
    ConcreteFactory2 *f2 = new ConcreteFactory2();
    Client(*f2);
    delete f2;
    return 0;
}
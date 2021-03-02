#include <iostream>

#include "ProductA1.h"
#include "ProductA2.h"

#include "ProductB1.h"
#include "ProductB2.h"

#include "Factory1.h"
#include "Factory2.h"

/**
 * The client code works with factories and products only through abstract
 * types: AbstractFactory and AbstractProduct. This lets you pass any factory or
 * product subclass to the client code without breaking it.
 */

void ClientCode(const AbstractFactory &factory) {
    const ProductA *product_a = factory.CreateProductA();
    const ProductB *product_b = factory.CreateProductB();
    std::cout << product_b->UsefulFunctionB() << "\n";
    std::cout << product_b->AnotherUsefulFunctionB(*product_a) << "\n";
    delete product_a;
    delete product_b;
}

int main() {
    std::cout << "Client: Testing client code with the first factory type:\n";
    Factory1 *f1 = new Factory1();
    ClientCode(*f1);
    delete f1;
    std::cout << std::endl;
    std::cout << "Client: Testing the same client code with the second factory type:\n";
    Factory2 *f2 = new Factory2();
    ClientCode(*f2);
    delete f2;
    return 0;
}
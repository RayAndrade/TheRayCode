
#include <iostream>
#include "Product.h"
#include "ConcreteProduct1.h"
#include "ConcreteProduct2.h"
#include "Creator.h"
#include "ConcreteCreator1.h"
#include "ConcreteCreator2.h"

void ClientCode(const Creator& creator) {
    // ...
    std::cout << "Client: I'm not aware of the creator's class, but it still works.\n"
              << creator.SomeOperation() << std::endl;
    // .
}

int main() {

    std::cout << "App: Launched with the ConcreteCreator1.\n";
    Creator* creator = new ConcreteCreator1();
    ClientCode(*creator);
    std::cout << std::endl;
    std::cout << "App: Launched with the ConcreteCreator2.\n";
    Creator* creator2 = new ConcreteCreator2();
    ClientCode(*creator2);

    delete creator;
    delete creator2;
    std::cout << "Hello TheRayCode.\n";
    return 0;
}

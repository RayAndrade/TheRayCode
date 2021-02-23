#include <iostream>

#include "Product.h"
#include "ConcreteProduct1.h"
#include "ConcreteProduct2.h"
#include "Creator.h"
#include "ConcreteCreator1.h"
#include "ConcreteCreator2.h"

/**
 * The client code works with an instance of a concrete creator, albeit through
 * its base interface. As long as the client keeps working with the creator via
 * the base interface, you can pass it any creator's subclass.
 */

void ClientCode(const Creator& creator) {
    // ...
    std::cout << "Client: I'm client code: " << creator.SomeOperation() << std::endl;
    // .
}

/**
 * The Application picks a creator's type depending on the configuration or
 * environment.
 */


int main() {

    std::cout << "App: Launched with ConcreteCreator1."<< std::endl;
    Creator* creator = new ConcreteCreator1();
    ClientCode(*creator);
    std::cout << std::endl;
    std::cout << "App: Launched with ConcreteCreator2."<< std::endl;
    Creator* creator2 = new ConcreteCreator2();
    ClientCode(*creator2);

    delete creator;
    delete creator2;
    std::cout << "Hello, World!" << std::endl;
    return 0;
}

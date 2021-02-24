#include <iostream>

#include "Product.h"
#include "ConcreteProductA.h"
#include "ConcreteProductB.h"
#include "Creator.h"
#include "ConcreteCreatorA.h"
#include "ConcreteCreatorB.h"

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

    std::cout << "App: Launched with the ConcreteCreatorA.\n";
    Creator* creator = new ConcreteCreatorA();
    ClientCode(*creator);
    std::cout << std::endl;
    std::cout << "App: Launched with the ConcreteCreatorB.\n";
    Creator* creatorB = new ConcreteCreatorB();
    ClientCode(*creatorB);

    delete creator;
    delete creatorB;

    delete creator;
    delete creatorB;

    std::cout << "Hello, World!" << std::endl;
    return 0;
}

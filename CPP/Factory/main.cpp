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
    std::cout << "Client: I'm not aware of the creator's class, but it still works.\n"
              << creator.SomeOperation() << std::endl;
    // .
}

/**
 * The Application picks a creator's type depending on the configuration or
 * environment.
 */



int main() {

    std::cout << "App: Launched with the ConcreteCreatorA." << std::endl;
    Creator* creatorA = new ConcreteCreatorA();
    ClientCode(*creatorA);

    std::cout << std::endl;
    std::cout << "App: Launched with the ConcreteCreatorB." << std::endl;
    Creator* creatorB = new ConcreteCreatorB();
    ClientCode(*creatorB);

    delete creatorA;
    delete creatorB;

    std::cout << "The Ray Code is AWESOME!!!" << std::endl;
    return 0;
}

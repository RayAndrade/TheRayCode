#include <iostream>

#include "Product.h"
#include "ProductA.h"
#include "ProductB.h"
#include "Creator.h"
#include "CreatorA.h"
#include "CreatorB.h"

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

    std::cout << "App: Launched with the CreatorA." << std::endl;
    Creator* creatorA = new CreatorA();
    ClientCode(*creatorA);

    std::cout << std::endl;
    std::cout << "App: Launched with the CreatorB." << std::endl;
    Creator* creatorB = new CreatorB();
    ClientCode(*creatorB);

    delete creatorA;
    delete creatorB;

    std::cout << "The Ray Code is AWESOME!!!" << std::endl;
    return 0;
}

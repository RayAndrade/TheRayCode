#include "ProductA.h"
#include "ProductB.h"

#include "CreatorA.h"
#include "CreatorB.h"

void ClientCode(const Creator& creator) {
    // ...
    std::cout << "Client: I'm not aware of the creator's class, but it still works.\n"
              << creator.SomeOperation() << std::endl;
    // .
}

int main() {

    const char8_t *const x  = u8"\u0444";
    std::cout << x << std::endl;
    std::cout << "App: Launched with the CreatorA, " << std::endl;
    Creator* creatorA = new CreatorA();
    ClientCode(*creatorA);

    std::cout << std::endl;
    std::cout << "App: Launched with the CreatorB." << std::endl;
    Creator* creatorB = new CreatorB();
    ClientCode(*creatorB);

    delete creatorA;
    return 0;
}

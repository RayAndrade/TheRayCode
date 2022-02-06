#include <iostream>
#include "Factory.h"

void Client(Factory &prototype_factory) {
    std::cout << "Let's create a Prototype 1\n";

    Prototype *prototype = prototype_factory.CreatePrototype(Type::PROTOTYPE_1);
    prototype->Method(90);
    delete prototype;

    std::cout << "\n";

    std::cout << "Let's create a Prototype 2 \n";

    prototype = prototype_factory.CreatePrototype(Type::PROTOTYPE_2);
    prototype->Method(10);

    delete prototype;
}

int main() {
    Factory *prototype_factory = new Factory();
    Client(*prototype_factory);
    delete prototype_factory;
    return 0;
}

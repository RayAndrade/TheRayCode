//============================================================================
// Name        : Prototype.cpp
// Author      : The Ray Code
// Version     :
// Prototype Design Pattern
// Intent: Lets you copy existing objects without making your code dependent on
// their classes.
//============================================================================

#include <iostream>

#include "Type.h"
#include "Prototype.h"
#include "ConcretePrototype1.h"
#include "ConcretePrototype2.h"
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

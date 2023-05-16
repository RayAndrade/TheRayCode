#include <iostream>

#include "ConcretePrototype.h"

int main() {

    ConcretePrototype original(10);
    ConcretePrototype* copy = static_cast<ConcretePrototype*>(original.clone());

    std::cout << "Original value: " << original.getValue() << std::endl;
    std::cout << "Copy value: " << copy->getValue() << std::endl;

    delete copy;
    std::cout << "Hello, World!" << std::endl;
    return 0;
}

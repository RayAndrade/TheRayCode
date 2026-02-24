#include <iostream>
#include "ConcretePrototype.h"

int main() {
    ConcretePrototype* prototype = new ConcretePrototype("Example");
    ConcretePrototype* clonedPrototype = dynamic_cast<ConcretePrototype*>(prototype->clone());

    std::cout << "Original object data: " << prototype->getData() << std::endl;
    std::cout << "Cloned object data: " << clonedPrototype->getData() << std::endl;

    delete prototype;
    delete clonedPrototype;
}

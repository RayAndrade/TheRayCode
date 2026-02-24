#include <iostream>
#include "Visitor.h"
#include "Component.h"

#include "Visitor1.h"
#include "Visitor2.h"

#include "ComponentA.h"
#include "ComponentB.h"

void ClientCode(std::array<const Component *, 2> components, Visitor *visitor) {
    // ...
    for (const Component *comp : components) {
        comp->Accept(visitor);
    }
    // ...
}


int main() {
    std::array<const Component *, 2> components = {new ComponentA, new ComponentB};
    std::cout << "The client code works with all visitors via the base Visitor interface:\n";

    Visitor1 *visitor1 = new Visitor1;
    ClientCode(components, visitor1);

    std::cout << "\n";
    std::cout << "It allows the same client code to work with different types of visitors:\n";

    Visitor2 *visitor2 = new Visitor2;
    ClientCode(components, visitor2);

    delete visitor1;
    delete visitor2;

    return 0;
}

// main.cpp
#include <iostream>
#include "ConcreteComponent.h"
#include "Decorator.h"

int main() {
    std::shared_ptr<Component> component = std::make_shared<ConcreteComponent>();
    std::shared_ptr<Component> decoratedComponent = std::make_shared<Decorator>(component);

    std::cout << "Result: " << decoratedComponent->operation() << std::endl;

    return 0;
}

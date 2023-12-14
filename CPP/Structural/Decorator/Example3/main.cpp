// main.cpp
#include "ConcreteComponent.h"
#include "ConcreteDecoratorA.h"

int main() {
    Component* simple = new ConcreteComponent();
    Component* decorated = new ConcreteDecoratorA(simple);

    std::cout << "Running basic component:\n";
    simple->operation();

    std::cout << "\nRunning decorated component:\n";
    decorated->operation();

    delete simple;
    delete decorated;
    return 0;
}

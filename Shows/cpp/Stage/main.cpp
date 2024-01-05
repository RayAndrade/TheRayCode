#include "ConcreteComponent.h"
#include "ConcreteDecoratorA.h"

int main() {
    Component* simple = new ConcreteComponent();
    Component* decorated = new ConcreteDecoratorA(simple);

    std::cout << "Running basic component:\n";
    simple->operation();

    delete simple;
    delete decorated;

    return 0;
}

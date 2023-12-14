#include "ConcreteComponent.h"
#include "ConcreteDecoratorA.h"
#include "ConcreteDecoratorB.h"

int main() {
    Component* simple = new ConcreteComponent();
    Component* decoratorA = new ConcreteDecoratorA(simple);
    Component* decoratorB = new ConcreteDecoratorB(decoratorA);

    decoratorB->operation();

    delete simple;
    delete decoratorA;
    delete decoratorB;
    return 0;
}

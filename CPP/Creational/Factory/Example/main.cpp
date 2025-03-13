#include <iostream>
#include "ConcreteCreator.h"

// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int main() {
    Creator* creatorA = new ConcreteCreatorA();
    Product* productA = creatorA->factoryMethod();
    productA->use(); // Output: Using ConcreteProductA

    Creator* creatorB = new ConcreteCreatorB();
    Product* productB = creatorB->factoryMethod();
    productB->use(); // Output: Using ConcreteProductB

    delete productA;
    delete creatorA;
    delete productB;
    delete creatorB;
    return 0;
}

// TIP See CLion help at <a
// href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>.
//  Also, you can try interactive lessons for CLion by selecting
//  'Help | Learn IDE Features' from the main menu.
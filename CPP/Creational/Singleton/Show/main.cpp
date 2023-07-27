#include <iostream>

#include "OnlyOne.h"

#include "Ordinary.h"

int main() {
    // Wrong: cannot directly instantiate an object.
    // OnlyOne obj;

    // Correct: getting the unique instance.
    OnlyOne& singletonObject = OnlyOne::getInstance();

    // Use the singleton object.
    singletonObject.someMethod();

    Ordinary firstOrdinaryObject;

    firstOrdinaryObject.printAddress();

    Ordinary secondOrdinaryObject;

    // Use the objects.
    firstOrdinaryObject.someMethod();
    secondOrdinaryObject.someMethod();

    secondOrdinaryObject.printAddress();

    return 0;
}

void OnlyOne::someMethod() {
    std::cout << "Hello from OnlyOne!" << std::endl;
}

void Ordinary::someMethod() {
    std::cout << "Ordinary says Hello!" << std::endl;
}
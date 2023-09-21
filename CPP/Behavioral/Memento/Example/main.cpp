#include "Originator.h"
#include "Caretaker.h"
#include <iostream>

int main() {
    Originator originator;
    Caretaker caretaker;

    originator.setState("State1");
    caretaker.add(originator.saveToMemento());

    originator.setState("State2");
    caretaker.add(originator.saveToMemento());

    originator.setState("State3");

    std::cout << "Current State: " << originator.getState() << std::endl;

    originator.restoreFromMemento(caretaker.get(0));
    std::cout << "First saved State: " << originator.getState() << std::endl;

    originator.restoreFromMemento(caretaker.get(1));
    std::cout << "Second saved State: " << originator.getState() << std::endl;

    return 0;

}

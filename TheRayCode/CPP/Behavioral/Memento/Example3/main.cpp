#include <iostream>
#include "Originator.h"
#include "Caretaker.h"

int main() {
    Originator originator;
    Caretaker caretaker;

    originator.set("State1");
    caretaker.addMemento(originator.saveToMemento());

    originator.set("State2");
    caretaker.addMemento(originator.saveToMemento());

    originator.set("State3");
    caretaker.addMemento(originator.saveToMemento());

    // Restore to previous states
    originator.restoreFromMemento(caretaker.getMemento(1)); // Should restore to State2
    originator.restoreFromMemento(caretaker.getMemento(0)); // Should restore to State1

    return 0;
}

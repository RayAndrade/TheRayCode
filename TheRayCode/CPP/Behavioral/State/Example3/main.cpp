#include "VendingMachine.h"
#include <iostream>

int main() {

    VendingMachine vendingMachine;

    vendingMachine.pressButton(); // Should print "Please insert a coin before pressing the button."
    vendingMachine.insertCoin(); // Should print "Coin inserted. Moving to 'HasCoin' state."
    vendingMachine.pressButton(); // Should print "Button pressed. Dispensing item."
    vendingMachine.dispense();    // Should print "Item dispensed. Returning to 'Idle' state."

    return 0;
}

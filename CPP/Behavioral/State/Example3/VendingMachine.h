//
// Created by ray on 3/11/24.
//

#ifndef EXAMPLE3_VENDINGMACHINE_H
#define EXAMPLE3_VENDINGMACHINE_H

#include "State.h"

class VendingMachine {
public:
    VendingMachine();

    void insertCoin();
    void pressButton();
    void dispense();

    void setState(State* state);

private:
    State* currentState;
};

#endif //EXAMPLE3_VENDINGMACHINE_H

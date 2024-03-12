//
// Created by ray on 3/11/24.
//

#ifndef EXAMPLE3_STATE_H
#define EXAMPLE3_STATE_H

class VendingMachine; // Forward declaration

class State {
public:
    virtual void insertCoin(VendingMachine* vendingMachine) = 0;
    virtual void pressButton(VendingMachine* vendingMachine) = 0;
    virtual void dispense(VendingMachine* vendingMachine) = 0;
};

#endif //EXAMPLE3_STATE_H

//
// Created by ray on 3/11/24.
//

#ifndef EXAMPLE3_HASCOINSTATE_H
#define EXAMPLE3_HASCOINSTATE_H

#include "State.h"

class HasCoinState : public State {
public:
    void insertCoin(VendingMachine* vendingMachine) override;
    void pressButton(VendingMachine* vendingMachine) override;
    void dispense(VendingMachine* vendingMachine) override;
};

#endif //EXAMPLE3_HASCOINSTATE_H

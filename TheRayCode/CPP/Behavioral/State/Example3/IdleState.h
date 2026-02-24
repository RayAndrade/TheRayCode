//
// Created by ray on 3/11/24.
//

#ifndef EXAMPLE3_IDLESTATE_H
#define EXAMPLE3_IDLESTATE_H

#include "State.h"

class IdleState : public State {
public:
    void insertCoin(VendingMachine* vendingMachine) override;
    void pressButton(VendingMachine* vendingMachine) override;
    void dispense(VendingMachine* vendingMachine) override;
};

#endif //EXAMPLE3_IDLESTATE_H

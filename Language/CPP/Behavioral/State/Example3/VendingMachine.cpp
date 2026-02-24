//
// Created by ray on 3/11/24.
//

#include "VendingMachine.h"
#include "IdleState.h"

VendingMachine::VendingMachine() {
    currentState = new IdleState();
}

void VendingMachine::insertCoin() {
    currentState->insertCoin(this);
}

void VendingMachine::pressButton() {
    currentState->pressButton(this);
}

void VendingMachine::dispense() {
    currentState->dispense(this);
}

void VendingMachine::setState(State* state) {
    delete currentState;
    currentState = state;
}
//
// Created by ray on 3/11/24.
//

#include "IdleState.h"
#include "VendingMachine.h"
#include "HasCoinState.h"
#include <iostream>

void IdleState::insertCoin(VendingMachine* vendingMachine) {
    std::cout << "Coin inserted. Moving to 'HasCoin' state." << std::endl;
    vendingMachine->setState(new HasCoinState());
}

void IdleState::pressButton(VendingMachine* vendingMachine) {
    std::cout << "Pressing button without coin does nothing." << std::endl;
}

void IdleState::dispense(VendingMachine* vendingMachine) {
    std::cout << "Please insert a coin before pressing the button." << std::endl;
}
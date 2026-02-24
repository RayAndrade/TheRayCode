//
// Created by ray on 3/11/24.
//

#include "HasCoinState.h"
#include "VendingMachine.h"
#include "SoldState.h"
#include <iostream>

void HasCoinState::insertCoin(VendingMachine* vendingMachine) {
    std::cout << "Coin already inserted." << std::endl;
}

void HasCoinState::pressButton(VendingMachine* vendingMachine) {
    std::cout << "Button pressed. Dispensing item." << std::endl;
    vendingMachine->setState(new SoldState());
}

void HasCoinState::dispense(VendingMachine* vendingMachine) {
    std::cout << "Cannot dispense without pressing the button." << std::endl;
}
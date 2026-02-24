//
// Created by ray on 3/11/24.
//
#include "SoldState.h"
#include "VendingMachine.h"
#include "IdleState.h"
#include <iostream>

void SoldState::insertCoin(VendingMachine* vendingMachine) {
    std::cout << "Please wait, dispensing item." << std::endl;
}

void SoldState::pressButton(VendingMachine* vendingMachine) {
    std::cout << "Already dispensing item." << std::endl;
}

void SoldState::dispense(VendingMachine* vendingMachine) {
    std::cout << "Item dispensed. Returning to 'Idle' state." << std::endl;
    vendingMachine->setState(new IdleState());
}
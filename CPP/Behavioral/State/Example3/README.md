[up](../README.md)

Sure, let's create a C++ example of the State design pattern. We'll use the classic scenario of a "Vending Machine" to demonstrate this pattern. In this example, we'll have a vending machine that can be in different states such as "IdleState", "HasCoinState", and "SoldState".

Here's the file structure:

1. VendingMachine.h - Defines the VendingMachine class.
2. VendingMachine.cpp - Implements the methods of the VendingMachine class.
3. State.h - Defines the State interface.
4. IdleState.h - Defines the IdleState class.
5. HasCoinState.h - Defines the HasCoinState class.
6. SoldState.h - Defines the SoldState class.
7. main.cpp - Demonstrates the usage of the VendingMachine and State classes.

Let's start with the code:

VendingMachine.h:
```cpp
#ifndef VENDINGMACHINE_H
#define VENDINGMACHINE_H

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

#endif // VENDINGMACHINE_H
```

State.h:
```cpp
#ifndef STATE_H
#define STATE_H

class VendingMachine; // Forward declaration

class State {
public:
    virtual void insertCoin(VendingMachine* vendingMachine) = 0;
    virtual void pressButton(VendingMachine* vendingMachine) = 0;
    virtual void dispense(VendingMachine* vendingMachine) = 0;
};

#endif // STATE_H
```

IdleState.h:
```cpp
#ifndef IDLESTATE_H
#define IDLESTATE_H

#include "State.h"

class IdleState : public State {
public:
    void insertCoin(VendingMachine* vendingMachine) override;
    void pressButton(VendingMachine* vendingMachine) override;
    void dispense(VendingMachine* vendingMachine) override;
};

#endif // IDLESTATE_H
```

HasCoinState.h:
```cpp
#ifndef HASCOINSTATE_H
#define HASCOINSTATE_H

#include "State.h"

class HasCoinState : public State {
public:
    void insertCoin(VendingMachine* vendingMachine) override;
    void pressButton(VendingMachine* vendingMachine) override;
    void dispense(VendingMachine* vendingMachine) override;
};

#endif // HASCOINSTATE_H
```

SoldState.h:
```cpp
#ifndef SOLDSTATE_H
#define SOLDSTATE_H

#include "State.h"

class SoldState : public State {
public:
    void insertCoin(VendingMachine* vendingMachine) override;
    void pressButton(VendingMachine* vendingMachine) override;
    void dispense(VendingMachine* vendingMachine) override;
};

#endif // SOLDSTATE_H
```

VendingMachine.cpp:
```cpp
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
```

IdleState.cpp:
```cpp
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
```

HasCoinState.cpp:
```cpp
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
```

SoldState.cpp:
```cpp
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
```

main.cpp:
```cpp
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
```

When you run the code, you should see the vending machine simulating the behavior of accepting coins, pressing buttons, and dispensing items based on its current state. And remember, in the world of vending machines, never trust a machine that dispenses jokes instead of snacks!

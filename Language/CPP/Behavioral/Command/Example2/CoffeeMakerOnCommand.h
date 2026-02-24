//
// Created by ray on 2/3/24.
//

#ifndef EXAMPLE2_COFFEEMAKERONCOMMAND_H
#define EXAMPLE2_COFFEEMAKERONCOMMAND_H

#include "Command.h"
#include "Receiver.h"

class CoffeeMakerOnCommand : public Command {
    CoffeeMaker& coffeeMaker;
public:
    CoffeeMakerOnCommand(CoffeeMaker& coffeeMaker) : coffeeMaker(coffeeMaker) {}
    void execute() override {
        coffeeMaker.on();
    }
};


#endif //EXAMPLE2_COFFEEMAKERONCOMMAND_H

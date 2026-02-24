//
// Created by ray on 2/3/24.
//

#ifndef EXAMPLE2_LIGHTONCOMMAND_H
#define EXAMPLE2_LIGHTONCOMMAND_H

#include "Command.h"
#include "Receiver.h"

class LightOnCommand : public Command {
    Light& light;
public:
    LightOnCommand(Light& light) : light(light) {}
    void execute() override {
        light.on();
    }
};

#endif //EXAMPLE2_LIGHTONCOMMAND_H

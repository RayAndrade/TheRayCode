//
// Created by ray on 2/3/24.
//

#ifndef EXAMPLE3_LIGHTONCOMMAND_H
#define EXAMPLE3_LIGHTONCOMMAND_H

#include "Command.h"
#include "Light.h"

// Concrete Command for turning on the light
class LightOnCommand : public Command {
private:
    Light* light;

public:
    explicit LightOnCommand(Light* l) : light(l) {}

    void execute() override {
        light->on();
    }
};

#endif //EXAMPLE3_LIGHTONCOMMAND_H

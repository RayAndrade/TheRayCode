//
// Created by ray on 2/3/24.
//

#ifndef EXAMPLE3_LIGHTOFFCOMMAND_H
#define EXAMPLE3_LIGHTOFFCOMMAND_H

#include "Command.h"
#include "Light.h"

// Concrete Command for turning off the light
class LightOffCommand : public Command {
private:
    Light* light;

public:
    explicit LightOffCommand(Light* l) : light(l) {}

    void execute() override {
        light->off();
    }
};

#endif //EXAMPLE3_LIGHTOFFCOMMAND_H

//
// Created by ray on 2/3/24.
//

#ifndef EXAMPLE3_TVOFFCOMMAND_H
#define EXAMPLE3_TVOFFCOMMAND_H

#include "Command.h"
#include "TV.h"

// Concrete Command for turning off the TV
class TVOffCommand : public Command {
private:
    TV* tv;

public:
    explicit TVOffCommand(TV* t) : tv(t) {}

    void execute() override {
        tv->off();
    }
};

#endif //EXAMPLE3_TVOFFCOMMAND_H

//
// Created by ray on 2/3/24.
//

#ifndef EXAMPLE3_TVONCOMMAND_H
#define EXAMPLE3_TVONCOMMAND_H

#include "Command.h"
#include "TV.h"

// Concrete Command for turning on the TV
class TVOnCommand : public Command {
private:
    TV* tv;

public:
    explicit TVOnCommand(TV* t) : tv(t) {}

    void execute() override {
        tv->on();
    }
};

#endif //EXAMPLE3_TVONCOMMAND_H

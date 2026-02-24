//
// Created by ray on 2/3/24.
//

#ifndef EXAMPLE3_REMOTECONTROL_H
#define EXAMPLE3_REMOTECONTROL_H

#include <iostream>
#include "Command.h"

// The Invoker class
class RemoteControl {
private:
    Command* slot;

public:
    void setCommand(Command* command) {
        slot = command;
    }

    void pressButton() {
        std::cout << "Remote control button was pressed: ";
        slot->execute();
    }
};

#endif //EXAMPLE3_REMOTECONTROL_H

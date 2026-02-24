//
// Created by ray on 2/3/24.
//

#ifndef EXAMPLE2_INVOKER_H
#define EXAMPLE2_INVOKER_H

#include "Command.h"

class Invoker {
    Command* slot;
public:
    void setCommand(Command* command) {
        slot = command;
    }

    void buttonWasPressed() {
        slot->execute();
    }
};


#endif //EXAMPLE2_INVOKER_H

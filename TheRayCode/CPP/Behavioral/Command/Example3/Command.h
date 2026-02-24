//
// Created by ray on 2/3/24.
//

#ifndef EXAMPLE3_COMMAND_H
#define EXAMPLE3_COMMAND_H

// The Command interface declares a method for executing a command
class Command {
public:
    virtual ~Command() = default;
    virtual void execute() = 0;
};


#endif //EXAMPLE3_COMMAND_H

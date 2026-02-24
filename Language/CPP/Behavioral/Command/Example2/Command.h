//
// Created by ray on 2/3/24.
//

#ifndef EXAMPLE2_COMMAND_H
#define EXAMPLE2_COMMAND_H

class Command {
public:
    virtual ~Command() {}
    virtual void execute() = 0;
};

#endif //EXAMPLE2_COMMAND_H

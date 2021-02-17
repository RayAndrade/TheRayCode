#ifndef COMMAND_COMMAND_H
#define COMMAND_COMMAND_H

class Command {
public:
    virtual ~Command() {
    }
    virtual void Execute() const = 0;
};

#endif //COMMAND_COMMAND_H

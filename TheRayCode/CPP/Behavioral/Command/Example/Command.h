#ifndef COMMAND_COMMAND_H
#define COMMAND_COMMAND_H
/**
 * The Command interface declares a method for executing a command.
 */

class Command {
public:
    virtual ~Command() {
    }
    virtual void Execute() const = 0;
};

#endif //COMMAND_COMMAND_H

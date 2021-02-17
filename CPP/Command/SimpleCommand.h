#ifndef COMMAND_SIMPLECOMMAND_H
#define COMMAND_SIMPLECOMMAND_H
#include "Command.h"

class SimpleCommand : public Command {
private:
    std::string pay_load_;

public:
    explicit SimpleCommand(std::string pay_load) : pay_load_(pay_load) {
    }
    void Execute() const override {
        std::cout << "SimpleCommand: See, I can do simple things like printing (" << this->pay_load_ << ")\n";
    }
};

#endif //COMMAND_SIMPLECOMMAND_H

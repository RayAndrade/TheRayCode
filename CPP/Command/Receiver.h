#ifndef COMMAND_RECEIVER_H
#define COMMAND_RECEIVER_H

class Receiver {
public:
    void DoSomething(const std::string &a) {
        std::cout << "Receiver: Working on (" << a << ".)\n";
    }
    void DoSomethingElse(const std::string &b) {
        std::cout << "Receiver: Also working on (" << b << ".)\n";
    }
};

#endif //COMMAND_RECEIVER_H

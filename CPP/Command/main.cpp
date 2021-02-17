#include <iostream>
#include "Invoker.h"
#include "Receiver.h"
#include "SimpleCommand.h"
#include "ComplexCommand.h"

int main() {

    Invoker *invoker = new Invoker;
    invoker->SetOnStart(new SimpleCommand("Say Hi!"));
    Receiver *receiver = new Receiver;
    invoker->SetOnFinish(new ComplexCommand(receiver, "Send email", "Save report"));
    invoker->DoSomethingImportant();

    delete invoker;
    delete receiver;

    std::cout << "The Ray Code is AWESOME!!!:" <<std::endl;
    return 0;
}

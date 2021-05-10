
#include <iostream>

#include "SimpleCommand.h"
#include "Receiver.h"
#include "ComplexCommand.h"
#include "Invoker.h"


/**
 * The client code can parameterize an invoker with any commands.
 */

int main() {
    Invoker *invoker = new Invoker;
    invoker->SetOnStart(new SimpleCommand("Say Hi!"));
    Receiver *receiver = new Receiver;
    invoker->SetOnFinish(new ComplexCommand(receiver, "Send email", "Save report"));
    invoker->DoSomethingImportant();

    delete invoker;
    delete receiver;

    return 0;
}
#include <iostream>
#include "Context.h"
#include "ConcreteStateA.h"
#include "ConcreteStateB.h"

void ConcreteStateA::Handle1() {
    {
        std::cout << "ConcreteStateA handles request1.\n";
        std::cout << "ConcreteStateA wants to change the state of the context.\n";

        this->context_->TransitionTo(new ConcreteStateB);
    }
}

/**
 * The client code.
 */
void ClientCode() {
    locContext *context = new locContext(new ConcreteStateA);
    context->Request1();
    context->Request2();
    delete context;
}

int main() {
    ClientCode();
    return 0;
}
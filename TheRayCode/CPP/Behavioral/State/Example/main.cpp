#include <iostream>
#include "Context.h"
#include "ConcreteStateA.h"



int main() {
    State* initialState = new ConcreteStateA();
    Context* context = new Context(initialState);

    context->request(); // Switches to State B
    context->request(); // Switches back to State A

    delete context;
    return 0;
}

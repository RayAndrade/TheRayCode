#include <iostream>
#include "ConcreteStrategyA.h"
#include "ConcreteStrategyB.h"
#include "Context.h"

int main() {
    ConcreteStrategyA strategyA;
    ConcreteStrategyB strategyB;

    Context context(&strategyA); // Start with strategy A
    context.executeStrategy(); // Output should be "Executing Concrete Strategy A"

    context.setStrategy(&strategyB); // Switch to strategy B
    context.executeStrategy(); // Output should be "Executing Concrete Strategy B"
    return 0;
}

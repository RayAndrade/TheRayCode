#include <iostream>
#include "Strategy.h"
#include "Context.h"

int main() {
    // Create strategies
    ConcreteStrategyA strategyA;
    ConcreteStrategyB strategyB;

    // Create context with strategy A
    Context context(&strategyA);
    context.executeStrategy();

    // Change strategy to B
    context.setStrategy(&strategyB);
    context.executeStrategy();
    return 0;
}

[up](../README.md) [script](script/page01.md)

The Strategy design pattern implemented in C++. We'll create three classes: `Strategy`, `ConcreteStrategyA`, and `ConcreteStrategyB`. The `Strategy` class is an interface defining a family of algorithms, while `ConcreteStrategyA` and `ConcreteStrategyB` are concrete implementations of these algorithms. 

We'll also create a `Context` class which maintains a reference to a `Strategy` object and allows the client to switch between different strategies dynamically.

Let's start with the header files:

**Strategy.h**
```cpp
#ifndef STRATEGY_H
#define STRATEGY_H

// Abstract Strategy class
class Strategy {
public:
    virtual ~Strategy() {}
    virtual void execute() = 0;
};

#endif // STRATEGY_H
```

**ConcreteStrategyA.h**
```cpp
#ifndef CONCRETESTRATEGYA_H
#define CONCRETESTRATEGYA_H

#include "Strategy.h"

// Concrete Strategy A class
class ConcreteStrategyA : public Strategy {
public:
    void execute() override;
};

#endif // CONCRETESTRATEGYA_H
```

**ConcreteStrategyB.h**
```cpp
#ifndef CONCRETESTRATEGYB_H
#define CONCRETESTRATEGYB_H

#include "Strategy.h"

// Concrete Strategy B class
class ConcreteStrategyB : public Strategy {
public:
    void execute() override;
};

#endif // CONCRETESTRATEGYB_H
```

**Context.h**
```cpp
#ifndef CONTEXT_H
#define CONTEXT_H

#include "Strategy.h"

// Context class
class Context {
public:
    Context(Strategy* strategy);
    void setStrategy(Strategy* strategy);
    void executeStrategy();

private:
    Strategy* strategy_;
};

#endif // CONTEXT_H
```

Now let's implement these classes:

**ConcreteStrategyA.cpp**
```cpp
#include <iostream>
#include "ConcreteStrategyA.h"

void ConcreteStrategyA::execute() {
    std::cout << "Executing Concrete Strategy A\n";
    // Implementation of strategy A
}
```

**ConcreteStrategyB.cpp**
```cpp
#include <iostream>
#include "ConcreteStrategyB.h"

void ConcreteStrategyB::execute() {
    std::cout << "Executing Concrete Strategy B\n";
    // Implementation of strategy B
}
```

**Context.cpp**
```cpp
#include "Context.h"

Context::Context(Strategy* strategy) : strategy_(strategy) {}

void Context::setStrategy(Strategy* strategy) {
    strategy_ = strategy;
}

void Context::executeStrategy() {
    if (strategy_)
        strategy_->execute();
}
```

And finally, the main.cpp file:

**main.cpp**
```cpp
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
```

The order to create the classes in your project would be:

1. Strategy
2. ConcreteStrategyA
3. ConcreteStrategyB
4. Context

When you run the code, you should see the output:
```
Executing Concrete Strategy A
Executing Concrete Strategy B
```

This demonstrates the Strategy design pattern, where the behavior of the `Context` object can be changed dynamically by switching between different `Strategy` objects.

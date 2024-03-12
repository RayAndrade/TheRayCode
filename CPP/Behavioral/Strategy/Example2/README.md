[up](../README.md)

Sure, let's create a C++ implementation of the Strategy design pattern. The Strategy pattern defines a family of algorithms, encapsulates each one, and makes them interchangeable. It lets the algorithm vary independently from clients that use it.

We'll create the following classes:

1. `Strategy` (interface): Defines an interface common to all supported algorithms.
2. `ConcreteStrategyA` and `ConcreteStrategyB`: Implements the algorithm using the Strategy interface.
3. `Context`: Maintains a reference to the current Strategy object.
4. `main.cpp`: Demonstrates the usage of the Strategy pattern.

Here's the code:

**Strategy.h:**

```cpp
#ifndef STRATEGY_H
#define STRATEGY_H

// Strategy interface
class Strategy {
public:
    virtual ~Strategy() {}
    virtual void execute() const = 0;
};

// Concrete Strategy A
class ConcreteStrategyA : public Strategy {
public:
    void execute() const override {
        // Implement algorithm A
        std::cout << "Executing algorithm A" << std::endl;
    }
};

// Concrete Strategy B
class ConcreteStrategyB : public Strategy {
public:
    void execute() const override {
        // Implement algorithm B
        std::cout << "Executing algorithm B" << std::endl;
    }
};

#endif // STRATEGY_H
```

**Context.h:**

```cpp
#ifndef CONTEXT_H
#define CONTEXT_H

#include "Strategy.h"

// Context class
class Context {
private:
    Strategy* strategy_;

public:
    Context(Strategy* strategy) : strategy_(strategy) {}

    void setStrategy(Strategy* strategy) {
        strategy_ = strategy;
    }

    void executeStrategy() const {
        if (strategy_)
            strategy_->execute();
    }
};

#endif // CONTEXT_H
```

**main.cpp:**

```cpp
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
```

**Explanation:**

- `Strategy`: This is an abstract base class that defines the interface for all concrete strategies to follow. In this case, it has a single method `execute()` that represents the algorithm.

- `ConcreteStrategyA` and `ConcreteStrategyB`: These are concrete implementations of the `Strategy` interface, providing specific algorithms. They override the `execute()` method with their implementations.

- `Context`: This class maintains a reference to the current strategy object and provides an interface for clients to change strategies and execute algorithms. The `setStrategy()` method allows changing the current strategy dynamically, and `executeStrategy()` method triggers the execution of the current strategy's algorithm.

When you run the code, you should see the following output:

```
Executing algorithm A
Executing algorithm B
```

This demonstrates the Strategy pattern, where the behavior of the `Context` object can vary depending on the strategy it's using, and the client can change this behavior dynamically by changing the strategy at runtime.

[up](../README.md)

Let's dive into the world of C++ with the Strategy design pattern, inspired by the classic "Design Patterns" by the Gang of Four. This design pattern falls under the Behavioral category and is all about defining a family of algorithms, encapsulating each one, and making them interchangeable. It lets the algorithm vary independently from clients that use it. Basically, it's like choosing your adventure in a video game, but for algorithms.

### The Scenario

Imagine we're running a circus show, and our main attraction is the Juggler. However, not every juggler is the same. Some prefer juggling balls, others juggle knives, and a few brave souls juggle chainsaws. But no matter the juggling style, the crowd must be entertained. This is where our Strategy pattern shines, by allowing the juggler to switch his juggling strategy based on what the crowd wants to see.

### The Structure

- **Strategy (.h):** This is an abstract base class for all juggling strategies. It declares a method `juggle()` that every juggling strategy will implement.

```cpp
// Strategy.h
#pragma once

class Strategy {
public:
    virtual ~Strategy() {}
    virtual void juggle() const = 0;
};
```

- **ConcreteStrategyA (.h), ConcreteStrategyB (.h), etc.:** These are concrete classes that implement the `juggle` method. In our case, we have `JuggleBalls`, `JuggleKnives`, and `JuggleChainsaws`.

```cpp
// JuggleBalls.h
#pragma once
#include "Strategy.h"
#include <iostream>

class JuggleBalls : public Strategy {
public:
    void juggle() const override {
        std::cout << "Juggling balls! Safe and sound." << std::endl;
    }
};
```

```cpp
// JuggleKnives.h
#pragma once
#include "Strategy.h"
#include <iostream>

class JuggleKnives : public Strategy {
public:
    void juggle() const override {
        std::cout << "Juggling knives! Don't try this at home." << std::endl;
    }
};
```

```cpp
// JuggleChainsaws.h
#pragma once
#include "Strategy.h"
#include <iostream>

class JuggleChainsaws : public Strategy {
public:
    void juggle() const override {
        std::cout << "Juggling chainsaws! Seriously, how am I still alive?" << std::endl;
    }
};
```

- **Context (Juggler.h):** This is the class that uses the Strategy. It can be configured with a `ConcreteStrategy` object and maintains a reference to a Strategy object.

```cpp
// Juggler.h
#pragma once
#include "Strategy.h"
#include <memory>

class Juggler {
private:
    std::unique_ptr<Strategy> strategy;
public:
    Juggler(std::unique_ptr<Strategy> strategy) : strategy(std::move(strategy)) {}
    void setStrategy(std::unique_ptr<Strategy> newStrategy) {
        strategy = std::move(newStrategy);
    }
    void perform() const {
        strategy->juggle();
    }
};
```

### The Main Event (main.cpp)

Here's how we bring the circus to life:

```cpp
#include "Juggler.h"
#include "JuggleBalls.h"
#include "JuggleKnives.h"
#include "JuggleChainsaws.h"
#include <iostream>

int main() {
    Juggler jerry(std::make_unique<JuggleBalls>());
    std::cout << "First act: ";
    jerry.perform();

    std::cout << "Switching to a more dangerous act: ";
    jerry.setStrategy(std::make_unique<JuggleKnives>());
    jerry.perform();

    std::cout << "For the grand finale: ";
    jerry.setStrategy(std::make_unique<JuggleChainsaws>());
    jerry.perform();

    return 0;
}
```

### The Order of Creation

1. **Strategy.h:** This is the foundation. Everything builds from here.
2. **ConcreteStrategy Classes (JuggleBalls.h, JuggleKnives.h, JuggleChainsaws.h):** These implement the specific juggling techniques.
3. **Context (Juggler.h):** This brings our strategy to life and allows us to switch juggling techniques.
4. **main.cpp:** The grand stage where our juggling acts are performed.

### What You'll See

Running this code, you'd witness the evolution of Jerry's juggling act, starting from the harmless juggling of balls to the daring juggling of chainsaws, much to the crowd's delight and your astonishment at his sheer survival instincts.

### A Touch of Humor

Imagine the console as the circus tent, your keyboard the drumroll, and each press of the run button a round of applause. Jerry's life hangs in the balance with every juggling

//
// Created by ray on 3/12/24.
//

#ifndef EXAMPLE2_STRATEGY_H
#define EXAMPLE2_STRATEGY_H

#include <iostream>
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

#endif //EXAMPLE2_STRATEGY_H

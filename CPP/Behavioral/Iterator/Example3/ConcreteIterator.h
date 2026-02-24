//
// Created by ray on 2/4/24.
//

#ifndef EXAMPLE3_CONCRETEITERATOR_H
#define EXAMPLE3_CONCRETEITERATOR_H

#include <stdexcept>
#include "Iterator.h"
#include "ConcreteAggregate.h"

class ConcreteIterator : public Iterator<int> {
private:
    const ConcreteAggregate* aggregate;
    int current;

public:
    ConcreteIterator(const ConcreteAggregate* aggregate) : aggregate(aggregate), current(0) {}

    int First() override {
        return aggregate->Get(0);
    }

    int Next() override {
        if (!IsDone()) current++;
        return CurrentItem();
    }

    bool IsDone() const override {
        return current >= aggregate->Count();
    }

    int CurrentItem() const override {
        if (IsDone()) {
            throw std::out_of_range("Iterator out of range");
        }
        return aggregate->Get(current);
    }
};

#endif //EXAMPLE3_CONCRETEITERATOR_H

//
// Created by ray on 2/4/24.
//

#ifndef EXAMPLE3_CONCRETEAGGREGATE_H
#define EXAMPLE3_CONCRETEAGGREGATE_H

#include "Aggregate.h"
#include "ConcreteIterator.h"
#include <vector>

class ConcreteAggregate : public Aggregate<int> {
private:
    std::vector<int> items;

public:
    Iterator<int>* CreateIterator() const override {
        return new ConcreteIterator(this);
    }

    int Count() const {
        return items.size();
    }

    void Add(int item) {
        items.push_back(item);
    }

    int Get(int index) const {
        return items.at(index);
    }
};
#endif //EXAMPLE3_CONCRETEAGGREGATE_H

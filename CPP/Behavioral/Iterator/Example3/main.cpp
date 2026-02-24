#include <iostream>
#include "ConcreteAggregate.h"

int main() {
    ConcreteAggregate aggregate;
    aggregate.Add(1);
    aggregate.Add(2);
    aggregate.Add(3);

    Iterator<int>* iterator = aggregate.CreateIterator();

    for (int item = iterator->First(); !iterator->IsDone(); item = iterator->Next()) {
        std::cout << item << std::endl;
    }

    delete iterator;

    return 0;
}

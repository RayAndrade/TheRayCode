//
// Created by ray on 2/4/24.
//

#ifndef EXAMPLE3_AGGREGATE_H
#define EXAMPLE3_AGGREGATE_H

#include "Iterator.h"

template <typename T>
class Aggregate {
public:
    virtual ~Aggregate() {}
    virtual Iterator<T>* CreateIterator() const = 0;
};

#endif //EXAMPLE3_AGGREGATE_H

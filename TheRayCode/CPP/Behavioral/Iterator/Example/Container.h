#ifndef ITERATOR_CONTAINER_H
#define ITERATOR_CONTAINER_H
#include "Iterator.h"
#include <vector>

/**
 * Generic Collections/Containers provides one or several methods for retrieving
 * fresh iterator instances, compatible with the collection class.
 */

template <class T>
class Container {
    friend class Iterator<T, Container>;

public:
    void Add(T a) {
        m_data_.push_back(a);
    }

    Iterator<T, Container> *CreateIterator() {
        return new Iterator<T, Container>(this);
    }

private:
    std::vector<T> m_data_;
};

#endif //ITERATOR_CONTAINER_H

//
// Created by ray on 2/4/24.
//

#ifndef EXAMPLE2_ITERATOR_H
#define EXAMPLE2_ITERATOR_H

template <typename T>
class Iterator {
public:
    virtual ~Iterator() {}

    virtual bool hasNext() const = 0;
    virtual T next() = 0;
};

#endif //EXAMPLE2_ITERATOR_H

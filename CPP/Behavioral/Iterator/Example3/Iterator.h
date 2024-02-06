//
// Created by ray on 2/4/24.
//

#ifndef EXAMPLE3_ITERATOR_H
#define EXAMPLE3_ITERATOR_H

template <typename T>
class Iterator {
public:
    virtual ~Iterator() {}
    virtual T First() = 0;
    virtual T Next() = 0;
    virtual bool IsDone() const = 0;
    virtual T CurrentItem() const = 0;
};

#endif //EXAMPLE3_ITERATOR_H

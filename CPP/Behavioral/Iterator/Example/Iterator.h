#ifndef ITERATOR_ITERATOR_H
#define ITERATOR_ITERATOR_H
#include <vector>
#include <iostream>

/**
 * C++ has its own implementation of iterator that works with a different
 * generics containers defined by the standard library.
 */

template <typename T, typename U>
class Iterator {
public:
    typedef typename std::vector<T>::iterator iter_type;
    Iterator(U *p_data, bool reverse = false) : m_p_data_(p_data) {
        m_it_ = m_p_data_->m_data_.begin();
    }

    void First() {
        m_it_ = m_p_data_->m_data_.begin();
    }

    void Next() {
        m_it_++;
    }

    bool IsDone() {
        return (m_it_ == m_p_data_->m_data_.end());
    }

    iter_type Current() {
        return m_it_;
    }

private:
    U *m_p_data_;
    iter_type m_it_;
};

#endif //ITERATOR_ITERATOR_H

# TheRayCode
## Iterator pattern c++
C++ has its own implementation of iterator that works with a different generics containers defined by the standard library.
We first create Template with < T, u>.
We create a class called **Iterator**.
The intorate will cycle our list.
```c++
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
```
Generic Collections/Containers provides one or several methods for retrieving fresh iterator instances, compatible with the collection class.

```c++
#include "Iterator.h"
#include <vector>
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
```

We will create a *class* called **Data**.
```c++
class Data {
public:
    Data(int a = 0) : m_data_(a) {}

    void set_data(int a) {
        m_data_ = a;
    }

    int data() {
        return m_data_;
    }

private:
    int m_data_;
};
```
The client code may or may not know about the Concrete Iterator or Collection classes, for this implementation the container is generic so you can used  with an int or with a custom class.

```c++
void ClientCode() {
    std::cout << "________________Iterator with int______________________________________" << std::endl;
    Container<int> cont;

    for (int i = 0; i < 10; i++) {
        cont.Add(i);
    }

    Iterator<int, Container<int>> *it = cont.CreateIterator();
    for (it->First(); !it->IsDone(); it->Next()) {
        std::cout << *it->Current() << std::endl;
    }

    Container<Data> cont2;
    Data a(100), b(1000), c(10000);
    cont2.Add(a);
    cont2.Add(b);
    cont2.Add(c);

    std::cout << "________________Iterator with custom Class______________________________" << std::endl;
    Iterator<Data, Container<Data>> *it2 = cont2.CreateIterator();
    for (it2->First(); !it2->IsDone(); it2->Next()) {
        std::cout << it2->Current()->data() << std::endl;
    }
}
```
We run the **ClientCode** in the *main* method.

```c++
int main() {
    ClientCode();
    return 0;
}
```


When we compile and run we get:
```run
________________Iterator with int______________________________________
0
1
2
3
4
5
6
7
8
9
________________Iterator with custom Class______________________________
100
1000
10000
```

The Ray Code is AWESOME!!!

[Wikipedia](https://en.wikipedia.org/wiki/Iterator_pattern)

----------------------------------------------------------------------------------------------------

Find Ray on:

[facebook](https://www.facebook.com/TheRayCode/)

[youtube](https://www.youtube.com/user/AndradeRay/)

[The Ray Code](https://www.RayAndrade.com)

[Ray Andrade](https://www.RayAndrade.org)

[home](./page01.md) | [back](./page01.md) [next](./page03.md)

Imagine for a moment that you have a series of people in a room. 

Each person is trying to avoid doing a specific task, so they keep passing it on to the next person saying, "Not my job!". 

That's essentially the Chain of Responsibility pattern! The idea is to decouple the sender from the receiver by allowing multiple objects to handle the request.

Let's look at a C++ example where different members of a household are trying to avoid doing the dishes:


Create **DishWasher.h**
```
DishWasher
```
add:
```
#include <iostream>
#include <memory>
```
and for the class structure:
```
class DishWasher {  };
```
and then add:
```
public:
    virtual ~DishWasher() = default;
    void setNext(std::shared_ptr<DishWasher> nextWasher) { this->nextWasher = nextWasher; }
    virtual void washDishes(const std::string& dishType) = 0;

protected:
    std::shared_ptr<DishWasher> nextWasher;
```


[page 3](./page03.md)
